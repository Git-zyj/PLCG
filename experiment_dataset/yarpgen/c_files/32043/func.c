/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32043
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */short) ((_Bool) (~(min((5268897188505248886ULL), (((/* implicit */unsigned long long int) 2147483647)))))));
                                var_16 = ((/* implicit */int) ((_Bool) arr_3 [i_4]));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) (~(arr_11 [i_0] [i_0] [4LL] [4LL] [i_0]))))));
                /* LoopSeq 2 */
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (signed char)-127))));
                    arr_16 [i_5] [i_1] = ((/* implicit */unsigned int) ((var_6) > (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_3)) % (((var_15) - (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                }
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) /* same iter space */
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((long long int) arr_14 [i_0] [i_1] [i_0] [i_0]))) : (((unsigned long long int) 9223372036854775807LL))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2110287766)))))) | (arr_11 [(signed char)18] [i_1] [i_1] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) var_15)))))));
                    arr_21 [i_6] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) max((-2110287743), (((/* implicit */int) (signed char)-70))))))));
                    arr_22 [i_0] [(signed char)20] [i_0] [i_0] = ((/* implicit */long long int) var_12);
                }
                var_20 |= ((/* implicit */int) ((short) ((2110287765) + (-2110287757))));
                arr_23 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((int) ((unsigned short) (unsigned short)43432)));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (signed char)89))));
}
