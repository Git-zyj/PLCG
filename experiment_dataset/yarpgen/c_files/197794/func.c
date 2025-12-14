/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197794
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_18 = ((/* implicit */_Bool) max((var_18), (var_14)));
            arr_6 [i_1] = ((/* implicit */signed char) (+(((((arr_5 [i_0] [i_0] [i_0]) >> (((/* implicit */int) arr_4 [i_1] [i_0] [i_0])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-22057)))))));
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 13; i_2 += 4) /* same iter space */
            {
                arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_8 [i_0] [i_2 + 2]))));
                var_19 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))), (min((-1LL), (((/* implicit */long long int) var_17)))))));
                /* LoopSeq 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_16 [i_0] [i_2 + 4] [i_2] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((unsigned char) (short)22079))) ? ((+(((/* implicit */int) (short)-22057)))) : (((/* implicit */int) ((short) var_4)))))));
                    arr_17 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) ((arr_1 [i_1]) >> (((((/* implicit */int) var_1)) + (33)))))))));
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    var_20 = ((/* implicit */int) ((((1264558929498290451LL) / (((/* implicit */long long int) 5824861U)))) & (((/* implicit */long long int) ((unsigned int) var_12)))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_22 [i_2] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((-6420862002000305292LL) / (var_0))))))) == (((/* implicit */int) ((signed char) 1264558929498290456LL)))));
                        var_21 = ((/* implicit */unsigned short) -1264558929498290439LL);
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_2] [i_2] [i_2] [i_4] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_6]) & (((/* implicit */int) var_14))))))))));
                        var_22 -= ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_2 + 1] [i_2] [i_4])))));
                        arr_26 [i_2] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1264558929498290433LL)));
                        arr_27 [i_0] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 2]) + (arr_5 [i_2 + 3] [i_2 - 1] [i_2 + 1])))), (((((/* implicit */_Bool) 1264558929498290463LL)) ? (-8362300477936688787LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-15))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_23 = ((unsigned short) (short)-22036);
                        var_24 = (short)6593;
                        var_25 = arr_12 [(short)1] [(short)1] [i_2 + 2];
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) var_3))));
                        arr_30 [i_0] [i_4] |= ((/* implicit */int) ((min((-1264558929498290476LL), (((/* implicit */long long int) (signed char)-8)))) >= (((/* implicit */long long int) ((/* implicit */int) (!(((arr_9 [i_0] [i_2] [i_4] [i_7]) > (-1720853182938244338LL)))))))));
                    }
                    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1264558929498290488LL)) ? (((/* implicit */int) var_12)) : (var_15))))))));
                }
                arr_31 [i_2] = ((/* implicit */signed char) arr_13 [i_0] [i_1] [i_2]);
            }
            for (int i_8 = 1; i_8 < 13; i_8 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    var_28 = ((((/* implicit */_Bool) -5457271069837898132LL)) ? (-785328695) : (((/* implicit */int) arr_12 [i_8 + 2] [i_8 + 3] [i_8 + 4])));
                    /* LoopSeq 1 */
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        var_29 = ((/* implicit */short) ((1264558929498290438LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)-12)))));
                        arr_39 [i_10] [i_8] [i_0] [i_8] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 4056297962U)) ? (((/* implicit */unsigned int) var_15)) : (1552040639U))) >> (((((int) 1264558929498290454LL)) - (2118859023)))));
                        arr_40 [i_8] [i_9] [i_8] [i_1] [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) arr_23 [i_0] [i_0] [i_1] [i_8] [i_9] [i_8])))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)20)) << (((arr_34 [i_0] [i_1] [(unsigned char)3] [i_9] [i_1] [i_1]) + (5500612492711016401LL)))))) ? (((/* implicit */int) (!(var_14)))) : ((+(((/* implicit */int) var_14))))));
                    }
                }
                arr_41 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-6151))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54756))))) : (((/* implicit */int) min((arr_15 [i_8 + 1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned short) arr_36 [i_8])))))))) ? (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])) - (((unsigned long long int) var_17)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) -2501349528492347049LL)) && (((/* implicit */_Bool) 1890950169578587709LL))))))))));
                var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) min((((/* implicit */int) min(((!(((/* implicit */_Bool) var_1)))), (((((/* implicit */int) (_Bool)1)) < (var_11)))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) -1264558929498290463LL))))))))))));
                var_32 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((15172375679032733297ULL), (((/* implicit */unsigned long long int) (short)8018)))), (((/* implicit */unsigned long long int) (+(1720853182938244340LL)))))))));
            }
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                for (short i_12 = 0; i_12 < 17; i_12 += 4) 
                {
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((arr_2 [i_1]) || ((!(((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-124)) + (2147483647))) >> (((((/* implicit */int) (signed char)75)) - (55))))))))));
                        arr_48 [i_12] [i_1] [i_11] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_0] [i_11] [i_11] [i_1] [i_0])))))) | (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_11] [i_12] [i_0]))) / (-1720853182938244338LL)))));
                    }
                } 
            } 
        }
        for (unsigned char i_13 = 1; i_13 < 14; i_13 += 4) 
        {
            arr_51 [i_13] [i_13 - 1] [i_13] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_38 [i_0] [i_13 + 1] [i_13 + 3] [i_13 + 1] [i_13 - 1])) : (((/* implicit */int) var_13))))) ? ((+(1048575LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
            var_33 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) (short)24878)) ? (((/* implicit */int) var_17)) : (-25863482)))) / ((+(min((1890950169578587709LL), (-775023406618441649LL)))))));
            arr_52 [i_13] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_15 [i_13 + 3] [i_13 + 2] [i_13 + 1] [i_13 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 3231870473U)) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) var_13))))) : (((-2412125926554294772LL) + (-5721216722481251286LL)))))));
            var_34 *= ((/* implicit */signed char) (+(25863482)));
            arr_53 [i_13] [i_0] [i_0] = ((/* implicit */_Bool) max((((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (1264558929498290457LL)))), (((/* implicit */long long int) arr_45 [i_0] [i_0] [i_0] [i_13 + 1] [i_13 + 1] [i_13]))));
        }
        var_35 = ((/* implicit */unsigned long long int) var_10);
    }
    var_36 = min((((((/* implicit */_Bool) (signed char)85)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) (signed char)61)))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */signed char) var_14)))))))));
}
