/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21626
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
    var_13 = min((min((((long long int) var_8)), (((/* implicit */long long int) (unsigned short)2032)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (8460061752682139447ULL)))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((signed char) (signed char)62)))))));
    var_14 = ((/* implicit */int) (~(5761453142973338707LL)));
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-6666301168644788735LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 6666301168644788735LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (min((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) ((/* implicit */int) var_4))) / (-6666301168644788735LL)))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) arr_8 [i_0]);
                                arr_14 [i_0] [i_0 - 1] [i_0] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */int) arr_6 [2ULL] [i_0] [(_Bool)1] [i_3]);
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)112)) ^ (((/* implicit */int) (signed char)10)))))))) * (((/* implicit */int) ((signed char) arr_11 [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 16; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_20 [i_6] [i_6] [i_6] [6ULL] [5ULL] [i_6] [i_0] = (+(((/* implicit */int) (unsigned char)102)));
                                arr_21 [7ULL] [(_Bool)1] [i_1] [i_5] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0 + 1] [i_0] [(signed char)16] [i_0])), (arr_9 [i_0 + 1] [4] [4] [i_5] [(_Bool)1] [(unsigned short)15])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_0 - 1])) == (7683920537974758145LL)))) : ((-(((/* implicit */int) arr_19 [i_0] [i_0 + 1] [i_0] [i_0 - 1] [i_0]))))));
                                var_17 = ((/* implicit */long long int) ((signed char) var_12));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
