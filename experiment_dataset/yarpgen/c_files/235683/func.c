/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235683
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)28739))))))));
        arr_3 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] [i_0] = ((/* implicit */short) (-(arr_5 [i_1] [i_1] [i_1])));
            arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32727))) - (2824307984U)))) ? (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])) : (arr_1 [4LL])));
        }
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_14 = (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_2])));
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    var_15 = ((/* implicit */long long int) ((unsigned short) arr_10 [i_0] [i_4] [i_0]));
                    var_16 = (-(((/* implicit */int) arr_15 [i_0] [i_3] [i_3] [i_3])));
                }
                for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    arr_19 [i_3] [i_3] [8] [(short)6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    var_17 = (+(((/* implicit */int) arr_15 [i_0] [i_3] [i_0] [i_0])));
                    arr_20 [i_3] [i_3] [i_0] [i_3] = ((/* implicit */short) ((int) arr_1 [i_3]));
                }
                arr_21 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((signed char) -3909093947179371848LL)))));
                arr_22 [i_0] [i_0] [(unsigned char)9] [i_3] = ((/* implicit */long long int) arr_10 [i_0] [i_2] [i_3]);
                var_18 = ((arr_5 [i_3] [i_2] [i_0]) << (((arr_5 [i_0] [i_0] [i_3]) - (16215096817051986818ULL))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                arr_25 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_9 [(short)9] [i_2] [i_0]))));
                arr_26 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)13)) ? (-15LL) : ((+(arr_1 [i_0])))));
            }
            for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                var_19 = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_0] [i_2] [i_7]))));
                var_20 = ((/* implicit */int) var_1);
                arr_29 [i_7] = ((/* implicit */long long int) arr_13 [i_7] [i_2] [i_2] [i_2] [i_0] [i_0]);
            }
            arr_30 [i_2] [i_0] = arr_5 [i_2] [i_0] [i_0];
            arr_31 [i_2] [i_2] [i_0] = ((/* implicit */short) ((arr_1 [(unsigned short)3]) * (((((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0]))) / (arr_1 [4LL])))));
        }
        for (int i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                arr_38 [i_9] [i_8] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_4 [i_0] [i_8] [i_0]) >= ((+(((/* implicit */int) (short)-29857))))));
                arr_39 [i_9] [i_9] = ((/* implicit */unsigned short) arr_9 [i_9] [i_8] [i_0]);
            }
            var_21 = ((/* implicit */unsigned short) var_0);
            arr_40 [3U] = ((/* implicit */unsigned char) var_7);
        }
        var_22 = ((/* implicit */long long int) arr_23 [i_0] [i_0] [6]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 22; i_10 += 2) 
    {
        arr_43 [5ULL] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_10]))))) ? (((/* implicit */int) ((((arr_41 [i_10]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7237217380208391261LL))) == (((/* implicit */long long int) ((/* implicit */int) min((arr_42 [i_10]), (((/* implicit */unsigned short) arr_41 [i_10]))))))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_41 [i_10])) == (((/* implicit */int) arr_41 [i_10]))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)38289))))))))));
        arr_44 [i_10] [i_10] = ((/* implicit */long long int) arr_42 [i_10]);
    }
    /* LoopSeq 3 */
    for (unsigned short i_11 = 2; i_11 < 15; i_11 += 2) /* same iter space */
    {
        arr_47 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_41 [i_11 + 1]) ? (-2031330947468850842LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_45 [i_11 - 1] [i_11]))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) max((arr_42 [i_11 + 1]), (arr_42 [i_11])))) : (((/* implicit */int) arr_41 [i_11 - 1]))))) : (2796477306U)));
        arr_48 [i_11 + 1] = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) (-(-1017969352)))))));
        arr_49 [i_11] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_46 [i_11 - 1])) <= (((/* implicit */int) arr_45 [i_11 + 1] [i_11])))) ? (((/* implicit */long long int) 1017969347)) : (((((-7587121464270190325LL) + (9223372036854775807LL))) << (((/* implicit */int) arr_41 [i_11])))))) >> ((((~(((/* implicit */int) (_Bool)0)))) + (57)))));
    }
    for (unsigned short i_12 = 2; i_12 < 15; i_12 += 2) /* same iter space */
    {
        arr_52 [(short)15] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_42 [i_12 + 1]))))));
        arr_53 [(unsigned short)13] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_42 [i_12])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)1)) == (((/* implicit */int) (unsigned short)27246))))) : (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (short)19048))))))));
    }
    for (long long int i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        arr_56 [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((short) -9018703051265881852LL))) | ((~(((/* implicit */int) (short)19147)))))))));
        arr_57 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_13] [i_13]))))) || (((((/* implicit */_Bool) 3361755926045830723LL)) || (((/* implicit */_Bool) arr_55 [i_13] [i_13]))))));
    }
}
