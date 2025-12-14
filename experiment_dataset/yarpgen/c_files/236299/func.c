/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236299
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_11 = ((((/* implicit */_Bool) ((((unsigned long long int) arr_1 [i_0])) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_1)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((_Bool) var_5))) : ((-(((/* implicit */int) arr_2 [i_0])))))));
                /* LoopNest 2 */
                for (long long int i_2 = 3; i_2 < 21; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_12 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */int) var_7))))) : (((unsigned long long int) var_6)))) * (max((((((/* implicit */_Bool) (unsigned short)36935)) ? (13044719023918226448ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((arr_8 [i_1] [i_1] [i_1] [i_3]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))));
                            arr_10 [i_3] [i_1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) -5356225300518090943LL)) ? (829793762) : (((/* implicit */int) (signed char)76)))), (((/* implicit */int) ((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))), (max((2305843009213693951ULL), (((/* implicit */unsigned long long int) 829793763))))));
                            var_13 -= ((/* implicit */_Bool) ((unsigned long long int) ((min((arr_3 [i_2] [i_1]), (var_2))) & (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))));
                            var_14 += min(((~(((/* implicit */int) arr_1 [i_2 - 1])))), (((/* implicit */int) ((_Bool) var_10))));
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (var_3)))) ? (min((((/* implicit */unsigned int) var_0)), (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) << (((max((min((arr_0 [i_1]), (var_9))), (var_9))) + (724919773)))));
                arr_12 [i_0] [i_0] = ((/* implicit */short) ((unsigned long long int) var_7));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 21; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) arr_5 [i_4] [i_0] [i_4])))))));
                                var_16 = ((/* implicit */unsigned short) var_1);
                                var_17 += ((/* implicit */long long int) (-((~(min((((/* implicit */int) var_8)), (var_9)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 3) 
    {
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            {
                arr_25 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_8))))))))) * (min((((/* implicit */unsigned long long int) arr_6 [i_7 + 1] [i_8] [i_7 - 1] [(signed char)22])), ((~(var_3)))))));
                arr_26 [i_7 + 1] [i_8] [i_8] &= ((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) var_4)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_1);
}
