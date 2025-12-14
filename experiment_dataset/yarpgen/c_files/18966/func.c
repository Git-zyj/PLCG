/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18966
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            arr_12 [i_0] [i_1] [(_Bool)1] [i_3] [i_3] [i_1] = ((/* implicit */signed char) arr_4 [i_2] [i_2]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned int) arr_10 [i_4] [i_3] [(_Bool)0]);
                        }
                        arr_14 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */unsigned short) (-(var_5)));
                    }
                    var_12 = ((/* implicit */short) var_1);
                    arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((_Bool) arr_10 [i_2 - 3] [i_2 + 2] [i_2 - 2])) ? (((((/* implicit */_Bool) (-(0LL)))) ? (((/* implicit */int) min((arr_3 [i_0] [(short)9]), (var_2)))) : (((((/* implicit */int) arr_2 [i_0] [i_1] [i_2 + 2])) & (((/* implicit */int) (signed char)(-127 - 1))))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
                    var_13 |= ((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) : (var_7)))) ? (((/* implicit */int) (signed char)114)) : (372067514)))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0))));
    /* LoopNest 2 */
    for (unsigned char i_5 = 4; i_5 < 11; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_15 |= ((/* implicit */short) min(((_Bool)1), (min((arr_18 [(unsigned short)11]), (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)65535))))))));
                            /* LoopSeq 1 */
                            for (long long int i_9 = 0; i_9 < 12; i_9 += 3) 
                            {
                                var_16 = (_Bool)1;
                                var_17 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((arr_6 [i_5] [i_5 - 4] [i_5]), (((/* implicit */unsigned char) (_Bool)1))))) ? ((~(var_0))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))) : (arr_10 [i_5 - 4] [i_5 - 4] [i_7]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                                var_18 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6]))))) - (((/* implicit */int) arr_18 [(_Bool)1]))));
                            }
                            arr_30 [i_5] [(_Bool)1] [i_7] = ((/* implicit */unsigned char) (unsigned short)508);
                            /* LoopSeq 2 */
                            for (short i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                            {
                                arr_34 [i_5 - 4] [i_6] [i_7] [i_8] [i_10] = ((/* implicit */short) min((((/* implicit */long long int) min((arr_25 [i_5 + 1]), (arr_25 [i_5 - 3])))), ((+(-5419853717289624499LL)))));
                                var_19 = ((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_5] [i_5]))));
                            }
                            for (short i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                            {
                                arr_38 [i_11] [i_8] [i_7] [i_7] [i_6] [i_6] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_3))));
                                var_20 = ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (signed char)127)));
                                arr_39 [i_11] [i_11] = ((/* implicit */unsigned int) (signed char)-119);
                            }
                            arr_40 [i_5] [(unsigned char)11] [i_5] [(unsigned char)11] [(signed char)5] = ((/* implicit */_Bool) min((((arr_1 [i_5 - 3] [i_7]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_1 [i_5 - 3] [i_5])))), (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (signed char)114);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) / (var_7)));
}
