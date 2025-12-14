/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35868
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
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) var_15))) / ((-(var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) 18327638177101052413ULL);
        var_22 = ((/* implicit */signed char) (short)-9401);
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_10))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (unsigned char)217))));
            var_25 = ((((/* implicit */int) (unsigned short)51403)) | (((/* implicit */int) (unsigned char)247)));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                var_26 |= ((/* implicit */int) arr_1 [i_0]);
                var_27 = ((/* implicit */short) (+(arr_1 [i_0])));
                arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-110)))));
            }
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    arr_14 [i_3] [i_3] [i_3] [9LL] = ((/* implicit */unsigned long long int) (short)-9401);
                    var_28 = ((/* implicit */_Bool) (~(arr_8 [i_0] [i_4 - 1])));
                    var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-1606026889917268483LL)))) ? (7U) : (4294967289U)));
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) arr_13 [i_4] [i_4 - 2] [i_4 - 2] [i_4 - 2] [i_4] [i_4])) : (((/* implicit */int) ((short) (signed char)42)))));
                }
                arr_15 [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
                var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) (+(var_4))))));
                arr_16 [i_3] [(signed char)1] [i_3] = ((/* implicit */short) var_0);
                /* LoopSeq 1 */
                for (unsigned int i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_6 = 4; i_6 < 12; i_6 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned long long int) arr_0 [i_3] [i_1]);
                        var_33 = ((arr_13 [i_6 + 1] [i_6] [i_6 - 3] [i_6 - 3] [i_6 - 4] [1ULL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) : (4ULL));
                        var_34 |= ((/* implicit */int) ((signed char) arr_21 [i_6 - 3] [i_5 - 1]));
                    }
                    var_35 |= ((/* implicit */unsigned long long int) (short)12940);
                    var_36 += ((/* implicit */signed char) ((((/* implicit */int) arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_1])) - (((/* implicit */int) var_1))));
                    var_37 = ((((/* implicit */_Bool) arr_5 [i_5 - 2] [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)14141)));
                }
            }
            arr_22 [i_0] = ((/* implicit */unsigned int) (signed char)109);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_38 = (+(((/* implicit */int) arr_23 [i_0] [i_7])));
            var_39 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)65535))));
        }
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
    {
        var_40 |= ((/* implicit */long long int) arr_2 [i_8]);
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-15443))))) ? (((/* implicit */unsigned long long int) arr_21 [i_8] [i_8])) : ((~(var_17))))))));
        var_42 |= (((!(((/* implicit */_Bool) arr_26 [i_8])))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) (unsigned short)65535)));
    }
    var_43 &= ((/* implicit */short) var_0);
}
