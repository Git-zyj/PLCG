/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22886
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_17 = ((/* implicit */unsigned char) var_16);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) -7244073037462538315LL);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_14 [(short)10] &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_16) : (var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (max((var_16), (arr_3 [i_0] [(short)6] [i_2]))))) | (((/* implicit */unsigned long long int) (+(arr_0 [i_0]))))));
                                arr_15 [i_4] [i_0] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_4] [i_1 - 2] [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32760))) : (((var_0) + (((/* implicit */unsigned long long int) 7244073037462538307LL))))));
                                arr_16 [4] [5ULL] [i_2] [i_4] [1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) 13687871865238697810ULL);
                var_20 = ((/* implicit */unsigned long long int) (signed char)-123);
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        {
                            var_21 = (-2147483647 - 1);
                            arr_29 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((unsigned long long int) var_6)) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_5))))))) ? (max((arr_28 [i_8] [i_7 - 3] [i_6] [i_5] [i_5]), (((/* implicit */long long int) arr_27 [i_7 - 2] [i_7 - 3] [i_7 - 3] [i_7 - 3])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (var_11)))) ? (((/* implicit */int) (short)23846)) : ((-(((/* implicit */int) arr_27 [i_5] [i_5] [7LL] [i_8])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) 10235977688995118912ULL)) && (((/* implicit */_Bool) var_8))));
                            var_23 = ((/* implicit */signed char) (_Bool)0);
                            var_24 &= ((/* implicit */int) max((((((/* implicit */_Bool) ((13687871865238697793ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)32)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)217))))) : (((((/* implicit */_Bool) 2055386647U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17310430064380391165ULL)) ? (((/* implicit */int) var_2)) : ((+((-2147483647 - 1)))))))));
                            var_25 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-103))))) > (var_16))))) > ((~(((long long int) var_9)))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */short) var_11);
            }
        } 
    } 
}
