/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246722
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (var_3)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_6);
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) max(((signed char)-7), ((signed char)(-127 - 1))));
                    var_11 = 4213297279786570347LL;
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (7125539394177866528LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] [i_4] [i_2] [i_5] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_15 [i_4 - 1] [(_Bool)1] [i_2] [i_4] [i_4 - 1] [i_4])) ? (((/* implicit */int) arr_12 [i_4] [i_4 - 1] [i_4 - 1] [i_1])) : (((/* implicit */int) (signed char)(-127 - 1))))) ^ ((+(((/* implicit */int) arr_5 [i_4 - 1]))))));
                                arr_20 [i_1] [i_2] [i_3] [i_2] [i_5] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (-351596086)))) : (min((arr_13 [i_2]), (((/* implicit */unsigned int) var_7)))))), (((/* implicit */unsigned int) ((var_8) ? (arr_18 [i_4 - 1]) : (((/* implicit */int) var_7)))))));
                                arr_21 [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_13 [i_4 - 1])))), (min((arr_9 [i_2] [i_4 - 1]), (((/* implicit */long long int) arr_13 [i_4 - 1]))))));
                            }
                        } 
                    } 
                    arr_22 [i_2] [i_2] = ((/* implicit */unsigned char) arr_15 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1]);
                }
            } 
        } 
        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_6 [(short)6] [i_1] [i_1]))) + (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) (!(arr_5 [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)39)))))));
    }
    var_13 = ((((_Bool) max((var_0), (((/* implicit */unsigned short) (unsigned char)230))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)));
    var_14 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) - (var_6)))) ? (((/* implicit */int) ((var_1) < (var_3)))) : (var_1))));
    var_15 = ((/* implicit */int) ((short) ((((var_6) & (((/* implicit */long long int) var_1)))) == ((~(var_2))))));
    /* LoopNest 2 */
    for (long long int i_6 = 3; i_6 < 23; i_6 += 2) 
    {
        for (unsigned int i_7 = 4; i_7 < 23; i_7 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                            arr_35 [i_6] [i_6] [i_9] [i_9] [i_7] [i_8] = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [(_Bool)1] [i_7] [i_6] [i_8] [i_9] [i_9]))))))));
                            arr_36 [i_9] [i_6] [i_6] [i_6 - 1] = ((/* implicit */unsigned short) (~(((unsigned int) (!(((/* implicit */_Bool) (unsigned char)207)))))));
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned char i_10 = 1; i_10 < 22; i_10 += 4) /* same iter space */
                            {
                                arr_39 [i_10] [i_6] [i_8] [i_8] [i_7] [i_6] [i_6] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)59998)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (signed char)116)))));
                                arr_40 [i_6] [i_6 - 3] [i_7] [i_7] [i_8] [i_6] [i_10 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)15)) % (((/* implicit */int) (signed char)116)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_11 = 1; i_11 < 22; i_11 += 4) /* same iter space */
                            {
                                arr_43 [i_6] [i_7] [21LL] [i_9] [i_6] = ((/* implicit */int) arr_25 [i_6]);
                                var_17 += ((/* implicit */signed char) 351596085);
                                var_18 -= ((/* implicit */long long int) arr_13 [i_6 - 1]);
                            }
                            var_19 = ((/* implicit */signed char) ((unsigned char) (unsigned short)10999));
                        }
                    } 
                } 
                arr_44 [i_6] [i_7] = ((((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)10991))))) ^ (((/* implicit */int) ((var_1) < (((/* implicit */int) var_9)))))))) ? (((((/* implicit */_Bool) arr_13 [i_6 - 1])) ? (arr_13 [i_6 + 1]) : (arr_13 [i_6 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_6] [i_7 - 4])) || (((/* implicit */_Bool) -6138425184720355617LL)))))) == (15513081651506404337ULL))))));
            }
        } 
    } 
}
