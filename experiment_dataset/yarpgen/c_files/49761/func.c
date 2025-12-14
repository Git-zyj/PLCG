/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49761
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
    var_12 = ((/* implicit */_Bool) var_2);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (short)-1425)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_13 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_5))) ? (((/* implicit */int) min(((short)-1425), ((short)1420)))) : (((/* implicit */int) ((arr_1 [i_0] [i_0]) && (((/* implicit */_Bool) (short)-1421)))))))) ? ((-(((/* implicit */int) arr_0 [i_0])))) : ((~(((/* implicit */int) (short)-23492))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_1 + 1] = var_9;
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 5939942547725539890ULL))) ? ((-(((/* implicit */int) (short)4487)))) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)2782)) < (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) arr_7 [i_0]))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_13 [i_0] [i_4] [i_0] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_0] [i_1] [(_Bool)1] [i_1 - 1] [i_3] [i_4]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (arr_3 [i_1 - 3] [i_1 - 3] [i_4])))) : (((/* implicit */int) ((_Bool) (short)1425)))));
                    var_15 = ((/* implicit */_Bool) var_2);
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_16 = (short)25016;
                        arr_16 [(_Bool)1] [i_1 + 1] [i_1 - 3] [i_3] [i_4] [(_Bool)1] [(short)0] = ((/* implicit */short) ((_Bool) var_11));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */short) var_0);
                        var_18 = ((/* implicit */_Bool) (short)2782);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        var_19 = ((/* implicit */_Bool) ((unsigned long long int) arr_12 [i_4]));
                        var_20 = ((/* implicit */unsigned long long int) ((_Bool) arr_19 [i_1 - 3]));
                        arr_21 [i_0] [i_4] [i_3] [i_4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-27552))))) ? (((unsigned long long int) (_Bool)0)) : (var_4)));
                    }
                    arr_22 [4ULL] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-1334))));
                    var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 1]))));
                }
                var_22 = (((+(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_1 [i_1 - 2] [i_1 - 2])));
                arr_23 [(_Bool)1] [i_1] = ((/* implicit */short) (-((~(((/* implicit */int) (_Bool)1))))));
            }
            arr_24 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_17 [i_0] [i_1 - 3] [i_1] [i_1] [i_1]))))))), (min((((/* implicit */unsigned long long int) ((_Bool) (short)1420))), (min((arr_3 [i_1] [i_1] [i_1]), (var_6)))))));
            arr_25 [i_1 - 3] [i_0] [i_0] = ((/* implicit */short) var_1);
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            arr_30 [i_8] [(short)6] [i_8] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_8])), ((+(((/* implicit */int) var_2))))))), (((((/* implicit */_Bool) (short)1418)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (18446708889337462784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1326)))))))));
            var_23 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) (short)471)) != ((-(((/* implicit */int) (short)25016))))))), ((-((+(((/* implicit */int) var_8))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (short i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)25016))));
                            arr_42 [i_0] [i_10] [(_Bool)1] [(short)10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_0])) ? (((/* implicit */int) (short)-481)) : (((/* implicit */int) arr_32 [i_9]))));
                            var_25 = ((_Bool) (short)18312);
                            arr_43 [i_12] [i_10] [i_12] [i_11] [i_10] [i_10] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_12] [i_11])) || (((/* implicit */_Bool) arr_6 [i_0] [i_9] [i_10]))));
                        }
                    } 
                } 
            } 
            var_26 = ((_Bool) ((((/* implicit */_Bool) 5134023556194453204ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)));
            var_27 = ((_Bool) ((((/* implicit */int) arr_31 [i_0] [i_0])) | (((/* implicit */int) (_Bool)1))));
            var_28 *= ((/* implicit */short) (~(((/* implicit */int) var_3))));
            arr_44 [i_0] [i_0] = ((/* implicit */short) (~(10563754986015944665ULL)));
        }
        for (short i_13 = 0; i_13 < 12; i_13 += 3) /* same iter space */
        {
            arr_47 [i_0] [i_13] = ((/* implicit */unsigned long long int) (~(max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) 1603930032979816211ULL)))))));
            arr_48 [i_13] [i_13] = ((/* implicit */_Bool) 215986500569329101ULL);
            var_29 = ((_Bool) ((unsigned long long int) ((_Bool) (_Bool)1)));
            arr_49 [i_13] = ((/* implicit */short) (-((((_Bool)0) ? (((/* implicit */int) max((var_11), (((/* implicit */short) arr_37 [i_0] [i_13]))))) : (((/* implicit */int) (short)1326))))));
        }
        var_30 = ((/* implicit */_Bool) (~((~(17247365039016961828ULL)))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
    {
        arr_54 [i_14] [i_14] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_14]))))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [11ULL] [11ULL] [i_14] [i_14] [i_14] [i_14]))))));
        arr_55 [i_14] = ((/* implicit */unsigned long long int) arr_51 [i_14]);
    }
}
