/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228201
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0)))) < (((/* implicit */int) ((_Bool) var_0))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_11 = min((((/* implicit */long long int) (~(((/* implicit */int) ((short) (_Bool)0)))))), ((~(36028247263150080LL))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 3; i_3 < 23; i_3 += 4) 
                {
                    var_12 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)11173)));
                    arr_12 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)20)), (min((((((/* implicit */_Bool) (short)11384)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) (_Bool)1))))))));
                    arr_13 [i_3] [i_1] [i_2] [i_1] [i_3] [i_3] = ((short) ((_Bool) (_Bool)1));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)11384)), (0ULL)));
                }
                arr_14 [i_0] [i_1] = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
            }
            /* LoopSeq 3 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                arr_19 [i_1] [i_1] [(_Bool)1] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)11153))))) ^ (var_6)))));
                var_14 = ((/* implicit */long long int) (unsigned char)39);
            }
            for (unsigned int i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (21ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0] [i_1] [i_5])))))))));
                var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 3; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) min(((signed char)32), (((/* implicit */signed char) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((3217929599U), (1077037696U)))));
                            arr_29 [(unsigned char)16] [(unsigned char)10] [(unsigned char)16] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_24 [i_0] [i_1] [i_5 + 1] [i_6] [(signed char)4] [i_7 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)22))) / (26ULL)))));
                            var_17 = ((/* implicit */int) (_Bool)1);
                        }
                    } 
                } 
                arr_30 [i_0] [i_0] [i_1] = ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)217)), (((((/* implicit */_Bool) (unsigned char)54)) ? (-1650471765626277668LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
                arr_31 [i_1] [(short)3] [i_5] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_10 [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [i_5]))))));
            }
            for (unsigned int i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                    {
                        arr_39 [i_10] [i_10] [i_10] [i_1] [(unsigned char)16] [6LL] [i_10] = ((/* implicit */unsigned char) (+((((_Bool)0) ? (-7631312864180136873LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        var_18 = ((/* implicit */signed char) (_Bool)0);
                    }
                    var_19 = ((/* implicit */unsigned char) min(((_Bool)1), (var_0)));
                    arr_40 [i_0] [i_1] [i_8] [i_9] = ((/* implicit */signed char) ((unsigned long long int) (-(((unsigned long long int) var_1)))));
                    var_20 = ((/* implicit */long long int) ((arr_32 [i_9] [i_8] [i_1] [(_Bool)1]) / (var_6)));
                    arr_41 [i_1] [i_8] = ((/* implicit */int) (unsigned char)9);
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    for (unsigned int i_12 = 2; i_12 < 22; i_12 += 2) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) ((((arr_35 [(_Bool)1] [i_8] [i_8]) >> (((((/* implicit */int) (short)-13233)) + (13278))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_1))));
                            var_23 = ((/* implicit */unsigned short) var_2);
                            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((_Bool) (unsigned char)103))))) * (((((/* implicit */unsigned long long int) (((_Bool)1) ? (724603624U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) - ((~(12909350723624148400ULL)))))));
                        }
                    } 
                } 
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                var_25 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)29)) < (((/* implicit */int) arr_3 [i_14]))))), (((var_3) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 24; i_15 += 4) 
                {
                    arr_59 [i_0] [(short)10] [i_14] [(unsigned char)15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (((_Bool)1) || (var_7)))), (((unsigned int) (_Bool)1)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_16 = 2; i_16 < 22; i_16 += 1) 
                    {
                        arr_62 [i_16] [i_13] = ((/* implicit */unsigned long long int) ((unsigned char) var_1));
                        arr_63 [i_16] [i_13] [i_14] [i_15] [i_15] = (((~(2251524935778304ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121))));
                        arr_64 [i_16] = ((/* implicit */unsigned char) (-(var_3)));
                        var_26 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (short i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        var_27 = ((/* implicit */_Bool) max(((~((~(((/* implicit */int) var_9)))))), (((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) var_9))))) / (((((/* implicit */int) arr_25 [i_17] [i_15] [i_15] [i_15] [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)76))))))));
                        arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) 31U);
                        var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((67553994410557440ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)212)))))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_70 [i_18] [i_18] [i_18] [i_18] [i_13] [(_Bool)1] = ((/* implicit */long long int) (+(((/* implicit */int) ((var_9) && (((/* implicit */_Bool) var_5)))))));
                        arr_71 [i_0] [13U] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) -602143672))));
                        arr_72 [i_18] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) var_0))))) ? (((5537393350085403215ULL) / (((/* implicit */unsigned long long int) arr_42 [i_18] [i_15] [i_14] [i_13] [i_0] [i_0])))) : (((unsigned long long int) var_8))))));
                        var_29 = ((/* implicit */long long int) ((_Bool) min(((~(((/* implicit */int) var_4)))), ((+(-602143672))))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_19 = 1; i_19 < 23; i_19 += 3) 
                {
                    arr_75 [i_0] [12LL] [i_14] [i_19] = ((/* implicit */unsigned char) (((!((_Bool)1))) ? (((/* implicit */int) (_Bool)1)) : (((int) (short)29430))));
                    arr_76 [i_0] [i_13] [i_0] [i_14] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) ? (((unsigned int) arr_66 [i_19] [i_13] [19ULL] [i_19] [i_19])) : (((/* implicit */unsigned int) ((/* implicit */int) ((18379190079298994169ULL) == (18446744073709551615ULL)))))));
                    arr_77 [i_0] = ((/* implicit */unsigned char) 9863069956337370181ULL);
                }
            }
            for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 3) 
            {
                arr_80 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (1706861287) : (((/* implicit */int) (signed char)-80)))))))), (((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (arr_15 [i_13] [i_20 + 1])))));
                var_30 = ((/* implicit */short) 5ULL);
                arr_81 [i_0] [i_0] [15ULL] [i_20] = ((/* implicit */_Bool) min((17ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned char)2), (((/* implicit */unsigned char) var_9))))) ^ (((/* implicit */int) max(((signed char)96), (((/* implicit */signed char) (_Bool)1))))))))));
                /* LoopNest 2 */
                for (signed char i_21 = 4; i_21 < 23; i_21 += 1) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_31 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned char) var_9)), (var_5)));
                            var_32 = ((/* implicit */unsigned long long int) (!(((_Bool) ((_Bool) (short)-525)))));
                            arr_88 [i_0] [i_13] [(_Bool)1] [18LL] [i_22] [i_13] = ((/* implicit */long long int) 5537393350085403216ULL);
                            var_33 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            }
            arr_89 [i_0] [i_0] [i_13] |= ((/* implicit */unsigned short) ((unsigned long long int) ((signed char) max((((/* implicit */short) (unsigned char)133)), ((short)32767)))));
        }
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 24; i_23 += 2) 
        {
            for (int i_24 = 0; i_24 < 24; i_24 += 4) 
            {
                {
                    arr_95 [(unsigned char)1] [i_24] [i_24] [(unsigned char)17] = ((/* implicit */unsigned long long int) (_Bool)0);
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((_Bool) arr_0 [i_24])))) ? (((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned short)1383)))), (((/* implicit */int) ((67553994410557439ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))) : (-6238547659545541140LL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_25 = 2; i_25 < 10; i_25 += 2) 
    {
        var_35 = ((/* implicit */unsigned long long int) max((var_35), (((((((/* implicit */_Bool) 18379190079298994172ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (18446744073709551615ULL))) >> (((((((/* implicit */_Bool) (short)-32767)) ? (67553994410557444ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)139))))) - (67553994410557398ULL)))))));
        var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 18379190079298994169ULL))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
        var_37 = (unsigned char)126;
        /* LoopSeq 1 */
        for (signed char i_26 = 0; i_26 < 14; i_26 += 4) 
        {
            var_38 ^= ((/* implicit */unsigned short) -5899648518601094086LL);
            var_39 = ((/* implicit */signed char) (!(var_9)));
            arr_102 [i_25 + 3] = ((/* implicit */unsigned char) var_6);
            var_40 = ((/* implicit */_Bool) ((long long int) 163117255));
        }
    }
    /* vectorizable */
    for (int i_27 = 0; i_27 < 20; i_27 += 2) 
    {
        var_41 = ((/* implicit */int) (((!((_Bool)1))) && (((/* implicit */_Bool) ((unsigned char) 18379190079298994172ULL)))));
        var_42 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((((((-163117254) + (2147483647))) >> (((6655160106712521364ULL) - (6655160106712521342ULL))))) - (463)))));
    }
    for (unsigned long long int i_28 = 0; i_28 < 18; i_28 += 4) 
    {
        var_43 = ((/* implicit */unsigned char) 163117255);
        arr_109 [i_28] = ((/* implicit */unsigned long long int) max((-1226867217), (-163117255)));
    }
    var_44 *= ((/* implicit */short) (~(((/* implicit */int) (unsigned char)187))));
}
