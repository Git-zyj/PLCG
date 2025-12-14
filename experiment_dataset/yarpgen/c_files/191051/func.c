/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191051
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((max((2700730488972870322ULL), (var_13))) * (var_8))))))));
    var_21 = ((/* implicit */_Bool) max((((((var_15) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_5))))))), ((~(((/* implicit */int) (unsigned char)92))))));
    var_22 = ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (-(((/* implicit */int) max(((_Bool)0), (((_Bool) (unsigned char)92)))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 4800358861649807952LL)))) >= (0LL)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_24 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((var_19), (((/* implicit */unsigned long long int) (signed char)71))))))) ? (1865855533) : (((/* implicit */int) (_Bool)0))));
                            arr_21 [i_1] [i_0] [i_5] [i_6] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) arr_15 [i_0] [i_1] [i_5] [i_6])) ^ (((/* implicit */int) var_7)))), (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) (signed char)122))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((((/* implicit */int) (_Bool)1)) <= (-2134992921))) ? (((((/* implicit */int) var_5)) | (((/* implicit */int) (signed char)-91)))) : (((/* implicit */int) var_3)))));
                    var_25 += var_1;
                    var_26 = ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_3)))), (arr_16 [i_0] [i_0] [i_0] [4])))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0])) < (((((/* implicit */int) var_1)) * (((/* implicit */int) (short)32767))))))) : (((/* implicit */int) ((((2700730488972870319ULL) >> (((((/* implicit */int) var_18)) - (62))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_7] [i_7])))))))));
                }
                arr_26 [i_0] [6LL] = ((((/* implicit */unsigned long long int) arr_13 [10] [i_0] [i_1] [i_1] [i_1])) > (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_1] [i_1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_16)) : (25ULL))) : (((/* implicit */unsigned long long int) var_15)))));
            }
        } 
    } 
    var_27 = ((/* implicit */signed char) ((_Bool) min((((/* implicit */unsigned long long int) ((8156855617484303433LL) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (1330434482791995360ULL))));
}
