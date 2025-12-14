/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220069
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
    var_20 = ((/* implicit */unsigned long long int) ((short) var_0));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_21 *= ((/* implicit */unsigned short) ((((((/* implicit */int) var_13)) << (((/* implicit */int) arr_2 [(_Bool)1] [i_0])))) * (((/* implicit */int) arr_2 [2ULL] [i_0]))));
        var_22 = ((/* implicit */signed char) var_12);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((arr_0 [i_0] [i_0]) >= (arr_1 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (max((((/* implicit */unsigned long long int) 8946210132268355169LL)), (5081894765099603476ULL)))));
        arr_4 [6ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_23 = ((/* implicit */signed char) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_11 [(unsigned short)5] = ((/* implicit */unsigned long long int) arr_5 [0LL]);
            /* LoopSeq 3 */
            for (long long int i_3 = 3; i_3 < 18; i_3 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                {
                    var_24 = ((/* implicit */unsigned int) ((_Bool) -1227625964));
                    arr_20 [(signed char)17] [i_1] [i_2] [i_2] [i_2] [(unsigned short)21] = arr_18 [i_1] [(unsigned short)6] [(short)18] [i_1];
                }
                arr_21 [i_1] [i_2] &= arr_9 [17LL];
                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_3] [i_3 + 1] [i_3 + 4] [i_3 - 2] [i_3 + 3])))))));
                var_26 = ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)124)), ((~(-1271203389)))));
            }
            for (long long int i_5 = 3; i_5 < 18; i_5 += 4) /* same iter space */
            {
                arr_25 [i_5] = ((/* implicit */int) arr_23 [i_1] [i_5] [i_1]);
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_14 [i_5] [i_2] [i_1] [i_1])), (arr_10 [(unsigned char)20] [4U] [i_1]))), (((/* implicit */long long int) max((((/* implicit */int) (_Bool)1)), (1431690164))))))) ? (arr_10 [i_1] [i_1] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_28 = 4294967295ULL;
                arr_26 [i_1] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [15] [i_5 - 3] [i_5]))));
            }
            for (long long int i_6 = 3; i_6 < 18; i_6 += 4) /* same iter space */
            {
                var_29 = ((/* implicit */short) arr_22 [i_1] [i_6] [i_6 + 3] [i_6]);
                arr_29 [i_2] [i_2] [i_6] [19] = ((/* implicit */_Bool) (~(((int) arr_22 [i_2] [i_6] [i_2] [(signed char)19]))));
            }
        }
        arr_30 [i_1] = ((/* implicit */unsigned long long int) (-(-8946210132268355195LL)));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 24; i_7 += 3) 
    {
        var_30 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_7]))));
        arr_33 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_19))) - (var_12)));
        var_31 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_32 [18ULL]))));
        var_32 = ((/* implicit */long long int) arr_32 [i_7]);
        arr_34 [i_7] = (~(arr_31 [i_7]));
    }
}
