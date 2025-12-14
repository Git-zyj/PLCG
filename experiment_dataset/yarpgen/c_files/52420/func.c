/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52420
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
    var_10 = ((/* implicit */_Bool) max((var_10), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (+(var_2))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (3LL)))) ? (((((/* implicit */_Bool) 3LL)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_5 [(unsigned char)12] [i_0 + 1] [i_1] = ((/* implicit */_Bool) 14LL);
                arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_3))))), (((((/* implicit */_Bool) -4LL)) ? (3LL) : (4LL))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) ((_Bool) min((((((/* implicit */_Bool) arr_11 [i_3] [i_2] [(_Bool)1] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0 - 2] [i_1])))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 3] [i_1 - 3])))));
                            var_12 += ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) <= (4LL))))) <= (13LL)));
                            arr_12 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_5)) ? (13LL) : (((/* implicit */long long int) var_1)))))))));
                            arr_13 [i_0] [i_3] [i_1] [i_3 - 2] [i_2] [i_3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned short) 13LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (3LL) : (-18LL)))) : (arr_11 [i_0 - 1] [i_0 + 1] [(_Bool)0] [i_0]))) & (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [16LL])) ? (var_1) : (((/* implicit */int) arr_1 [i_2] [i_3 + 1]))))) - (-3LL))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                {
                    for (signed char i_5 = 4; i_5 < 23; i_5 += 4) 
                    {
                        for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
                        {
                            {
                                arr_21 [i_1] [i_1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((-23LL), (37LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -23LL)))))) : (max((var_2), (((/* implicit */unsigned long long int) arr_4 [i_1])))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9LL)) ? (-4LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 + 1] [i_0 - 1]))))) <= (((long long int) arr_8 [i_0] [i_1 - 2])))))));
                                var_13 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 13LL)), (arr_11 [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 1])))))) ? (3LL) : (((long long int) ((((/* implicit */_Bool) arr_17 [i_1] [i_5] [i_6 - 2])) ? (-17LL) : (arr_14 [i_5] [i_0] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned char) max(((-(23LL))), (18LL)));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
    var_16 = ((/* implicit */int) (((!(((/* implicit */_Bool) -4LL)))) ? ((+(var_5))) : (min((((/* implicit */unsigned long long int) (+(17LL)))), (var_4)))));
    var_17 += ((/* implicit */_Bool) (~(3LL)));
}
