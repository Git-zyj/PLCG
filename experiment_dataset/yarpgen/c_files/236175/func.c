/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236175
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
    var_11 -= ((/* implicit */_Bool) var_0);
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_2) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)61331)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) && (((/* implicit */_Bool) ((min((((/* implicit */unsigned int) (unsigned char)255)), (var_0))) | (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)77))))))))));
    var_13 = min((min((min((var_3), (((/* implicit */unsigned short) var_6)))), (((/* implicit */unsigned short) ((var_9) == (var_9)))))), (((/* implicit */unsigned short) var_1)));
    var_14 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (var_7)))) < (((/* implicit */int) (((+(((/* implicit */int) (_Bool)1)))) > (((var_1) ? (((/* implicit */int) (unsigned char)21)) : (((/* implicit */int) (unsigned char)251))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1] [i_0]))) <= (var_5)));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) << (((/* implicit */int) ((arr_7 [i_2] [i_2] [i_2] [i_2] [(unsigned char)4] [i_0 + 2]) != (((/* implicit */int) arr_4 [12] [i_2] [12])))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned char) ((signed char) arr_4 [i_0] [i_1] [i_2]));
                        arr_12 [i_0] [i_1] = ((((/* implicit */unsigned long long int) arr_3 [i_0])) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))) * (8562516099958681766ULL))));
                        var_18 = ((((/* implicit */int) arr_11 [i_0 + 2])) << (((/* implicit */int) arr_11 [i_0 + 2])));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) /* same iter space */
                    {
                        var_19 &= ((/* implicit */unsigned long long int) (-(arr_0 [i_0 + 3] [i_0 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 1; i_6 < 16; i_6 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */unsigned short) ((unsigned int) ((short) arr_17 [i_0] [i_5] [i_0] [i_0] [i_0])));
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5959503574916968067LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35893))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) /* same iter space */
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_7 + 1] [i_0] [i_0] [i_7] [i_7])) || (((/* implicit */_Bool) ((long long int) (unsigned short)65535)))));
                            var_23 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)88)) % (1174661898)))) < (18293496068467512801ULL)));
                            arr_23 [i_5] [i_2 + 1] [i_2] [i_5] [i_0] [i_2] = ((/* implicit */unsigned char) ((arr_5 [i_0] [i_0] [i_2 - 1] [i_7 - 1]) | (arr_5 [i_0] [i_1 - 1] [i_2 - 1] [i_7 - 1])));
                        }
                    }
                    arr_24 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (((-(653593600))) < (((((/* implicit */_Bool) arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1 - 1])) ? (((/* implicit */int) arr_14 [i_2 + 1] [(unsigned char)9] [i_2 - 1] [i_0])) : (((/* implicit */int) arr_14 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        for (int i_9 = 1; i_9 < 16; i_9 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((_Bool) ((325143651U) * (arr_9 [i_2] [i_2 + 1] [i_8] [i_8 - 1] [i_8 - 2] [i_9 + 1])))))));
                                var_25 *= ((/* implicit */unsigned char) arr_7 [i_0] [i_1 - 1] [i_0 + 1] [i_9] [i_2 - 1] [i_0 + 3]);
                                var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((unsigned short) (-(var_5)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
