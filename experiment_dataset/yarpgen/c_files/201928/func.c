/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201928
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
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = min((((/* implicit */unsigned short) arr_1 [i_0])), (min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)5869))));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) (_Bool)1));
        var_17 = ((/* implicit */short) ((((((((/* implicit */int) arr_2 [(unsigned char)4])) == (((/* implicit */int) arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) -436243316)) ? (((/* implicit */unsigned long long int) 780343719U)) : (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) < (((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((/* implicit */long long int) ((/* implicit */int) var_15))) : (((((/* implicit */_Bool) 268435455U)) ? (-6986732259630833314LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_18 = (+((+(arr_8 [9]))));
        arr_9 [i_1] = arr_5 [i_1] [(_Bool)1];
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            var_19 = ((/* implicit */int) arr_2 [i_2]);
            /* LoopSeq 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((short) ((((/* implicit */_Bool) var_4)) ? (4026531862U) : (((/* implicit */unsigned int) var_5)))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
                {
                    var_21 = (~(((((/* implicit */_Bool) (short)9796)) ? (((/* implicit */int) (unsigned char)245)) : (((/* implicit */int) (unsigned short)0)))));
                    var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_7 [(signed char)2]))));
                    var_23 = ((/* implicit */unsigned long long int) -5964300577645499096LL);
                }
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 24; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */signed char) arr_20 [i_6] [i_6]);
                        var_25 = ((/* implicit */unsigned short) -1960517000);
                        arr_23 [i_6] [i_6] [i_1 - 1] [i_6] [i_1 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_5 [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 10571057870335314840ULL)))) : (arr_15 [i_1] [i_2] [i_1] [(signed char)16] [i_6] [20LL])));
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        arr_26 [i_2] [i_5] [i_3] [i_5] [i_5] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_0 [i_1 + 1] [i_1 - 2]))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)192)) % (((/* implicit */int) arr_5 [(unsigned short)9] [i_2]))))) % (arr_15 [i_3 - 1] [i_3] [i_3 - 1] [(unsigned short)0] [i_3] [i_3])));
                        var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) -1053121373)) < (34359738367ULL)));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_5] [i_1]))))) < (arr_25 [i_1 + 3] [i_1] [i_1] [i_1 + 2] [(unsigned char)15])));
                    }
                    var_29 = ((/* implicit */unsigned short) arr_11 [i_1 - 1] [16ULL]);
                    var_30 += ((/* implicit */unsigned long long int) (((_Bool)1) ? (-6986732259630833305LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18029)))));
                }
            }
            for (long long int i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_3)))) ? (((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_8] [i_2] [i_1] [i_1]))) : (arr_18 [i_1] [i_1 + 3] [i_1 - 2] [i_1 + 1] [i_1] [i_1 + 3]))) : (((/* implicit */long long int) arr_24 [i_8] [i_8] [i_2] [i_2] [i_1 - 1] [i_1]))));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6986732259630833331LL)) ? (((/* implicit */int) arr_14 [i_1] [i_2] [i_8] [i_8])) : (((/* implicit */int) arr_20 [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_24 [i_1] [i_1] [i_2] [i_2] [i_2] [i_8])) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)9)))));
            }
            arr_29 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)18029)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)45163))) : (780343719U)))));
            arr_30 [i_1] [i_1] = ((/* implicit */unsigned int) 10375254814952146079ULL);
        }
        var_33 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_1] [i_1 - 2])) % (arr_24 [i_1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1])))) - (((((/* implicit */_Bool) 559540888U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1 + 1] [i_1]))) : (arr_7 [i_1 + 1])))));
    }
    var_34 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) ((var_3) - (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (8) : (((/* implicit */int) var_15))))) : ((((_Bool)1) ? (435236489663769778LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_4)) ? (var_9) : (((/* implicit */int) var_11)))))))));
}
