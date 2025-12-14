/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199676
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
    var_19 = (-(((((_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (~((-(((((/* implicit */int) (short)19859)) + (((/* implicit */int) (_Bool)1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_6)) ? (1889363256) : (((/* implicit */int) (_Bool)1))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_10);
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(-1889363256)))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33912))) : (var_16)))))) || (((/* implicit */_Bool) ((int) ((18446744073709551590ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL))) : ((+(var_8)))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) 239262243)) : (7290695176695335292ULL))), (((/* implicit */unsigned long long int) -1942188296))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                arr_14 [i_1] [i_2] [i_2] = var_12;
                var_23 = ((/* implicit */short) (unsigned short)65527);
                arr_15 [i_1] [i_2] [i_3] = ((/* implicit */short) min(((((((_Bool)1) ? (2691445343U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) ((unsigned short) (~(((/* implicit */int) var_4))))))));
                var_24 = ((/* implicit */unsigned short) max((-437557734), (((/* implicit */int) ((short) (short)32767)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1371661141)) ? (arr_17 [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)44860))) : (2032)));
                    var_26 = ((/* implicit */_Bool) ((short) ((unsigned int) var_2)));
                    var_27 = ((/* implicit */unsigned short) (-(((7290695176695335292ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_16)));
                }
                for (short i_5 = 4; i_5 < 21; i_5 += 2) 
                {
                    arr_22 [i_1] [i_2] [i_2] [i_5] = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 2235536852U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0)))));
                    var_29 = ((/* implicit */int) var_11);
                }
            }
            /* vectorizable */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_18)) / (((/* implicit */int) (unsigned short)65534)))))));
                var_31 = ((((/* implicit */_Bool) (unsigned short)36022)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31620))) : ((-(var_16))));
            }
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [18ULL] [i_2] [i_2] [i_1] [i_2])) * (((/* implicit */int) (unsigned short)28))))) ? ((~(var_13))) : (((/* implicit */int) max(((_Bool)1), (arr_20 [i_2] [i_1] [i_1] [i_1] [i_2] [i_2]))))));
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 3) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)55447))) ? (-437557734) : (arr_29 [i_1] [i_1] [i_7] [i_7] [i_8]))))));
                    var_34 = arr_6 [i_1];
                }
                for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    var_35 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)56236)) ? (641042948) : (641042945)))));
                    arr_34 [i_1] [i_2] [(unsigned short)0] [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */int) var_15)), ((-(((/* implicit */int) ((short) var_6)))))));
                }
                /* vectorizable */
                for (short i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    var_36 = ((/* implicit */unsigned long long int) (unsigned short)7172);
                    /* LoopSeq 4 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */unsigned long long int) var_1);
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (arr_37 [i_1] [i_1] [i_10]))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        arr_43 [i_2] [i_2] [i_7] [(short)14] [(_Bool)1] = ((unsigned int) (short)32757);
                        var_39 = ((unsigned short) arr_12 [i_1] [i_7] [i_10] [i_12]);
                        arr_44 [17U] [i_2] [i_2] [i_7] [i_10] [i_12] = ((/* implicit */short) (~(((var_17) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))))));
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_40 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))));
                        arr_48 [i_1] [i_2] [i_7] [i_2] [i_13] = ((/* implicit */_Bool) (~(856630491U)));
                        arr_49 [i_2] [(unsigned short)14] [(unsigned short)14] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 856630491U)) + (arr_30 [i_10])));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                    {
                        arr_53 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) : (var_7)));
                        var_41 = ((/* implicit */int) (_Bool)1);
                    }
                    arr_54 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(-307842251)));
                    var_42 = ((/* implicit */_Bool) (+(var_13)));
                    var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) ((arr_51 [i_7] [i_7]) ? (((/* implicit */unsigned long long int) var_11)) : (var_8))))));
                }
                arr_55 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned short) min((((/* implicit */int) var_2)), ((((_Bool)1) ? (201326592) : (((/* implicit */int) var_18)))))));
                var_44 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_5 [i_1])) - (var_13))) ^ (min((((/* implicit */int) var_0)), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-825943660)))))));
                var_45 = ((/* implicit */_Bool) (((((((~(((/* implicit */int) var_4)))) | (825943675))) + (2147483647))) << (((((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-1)) : (((((/* implicit */_Bool) 2147483640)) ? (2147483640) : (((/* implicit */int) (short)30720)))))) + (21))) - (20)))));
            }
            for (int i_15 = 0; i_15 < 23; i_15 += 2) 
            {
                var_46 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_13)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4599))) & (((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 1) 
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_5)), (var_4))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)53357)) - (((/* implicit */int) max(((short)25), (((/* implicit */short) (_Bool)1)))))))) : (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), (var_6)))), (arr_42 [i_2] [i_16])))));
                    arr_61 [i_2] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) 18078026328931626760ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8192)))))));
                }
            }
        }
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        arr_64 [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (1349109109) : (((/* implicit */int) var_0))))) : (((((/* implicit */unsigned long long int) arr_42 [i_17] [i_17])) ^ (var_16)))));
        var_48 = ((/* implicit */unsigned short) (short)13);
    }
}
