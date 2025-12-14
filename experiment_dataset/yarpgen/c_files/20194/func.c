/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20194
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
    var_20 = ((/* implicit */unsigned short) (signed char)-125);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((arr_2 [i_0 + 1]), (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)120))) + (((((/* implicit */_Bool) var_6)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))))));
                var_22 = ((/* implicit */unsigned char) (~((~(var_16)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        for (int i_3 = 1; i_3 < 16; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_23 &= ((((/* implicit */int) (unsigned short)7289)) & (((/* implicit */int) (signed char)121)));
                                arr_18 [i_2] [i_3] [i_4] [14U] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)7806)) - (((/* implicit */int) (short)18315))))) >= (((unsigned long long int) (-(((/* implicit */int) var_7)))))));
                            }
                            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
                            {
                                var_24 = ((/* implicit */_Bool) var_19);
                                var_25 *= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_4]))))) == (((((/* implicit */int) ((_Bool) arr_12 [(_Bool)1] [15U] [15U] [i_4] [i_7]))) % (((/* implicit */int) max(((signed char)108), ((signed char)123))))))));
                            }
                            /* vectorizable */
                            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                            {
                                var_26 &= ((/* implicit */int) ((((/* implicit */int) var_0)) <= (((/* implicit */int) ((short) (_Bool)1)))));
                                arr_26 [i_2] [i_2] [i_4] [i_2] [i_2] [i_4] |= 3U;
                                var_27 &= ((/* implicit */unsigned char) 4U);
                                var_28 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)7288))));
                            }
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned int) var_4);
                        }
                    } 
                } 
                arr_28 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-79)) < (((/* implicit */int) (signed char)-64))));
                arr_29 [i_2] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((max((17140431509024080134ULL), (((/* implicit */unsigned long long int) 21U)))) > (((((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_3] [i_3] [i_2] [i_3] [i_2])) ? (5229236952406397511ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))))))))));
            }
        } 
    } 
    var_29 = ((/* implicit */int) var_7);
    var_30 = ((/* implicit */unsigned char) var_13);
}
