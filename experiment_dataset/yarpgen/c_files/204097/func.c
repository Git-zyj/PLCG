/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204097
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) (unsigned short)25171))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-9518)) : (((/* implicit */int) (unsigned short)25171))))))) : (max((((((/* implicit */_Bool) var_12)) ? (6U) : (((/* implicit */unsigned int) -1514447291)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1554110123481653990LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned long long int) var_13))))) ? (min((((/* implicit */unsigned long long int) 1554110123481653990LL)), (arr_0 [i_1]))) : (((/* implicit */unsigned long long int) min((arr_6 [i_0] [i_1] [i_1]), (((/* implicit */int) arr_2 [i_0] [i_0])))))))) ? (((((/* implicit */_Bool) ((long long int) 4294967290U))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (15U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((var_6), (((/* implicit */short) (_Bool)0))))))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 2U)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18725)))));
                                arr_16 [i_3] [i_1] [i_2] = ((unsigned int) ((((/* implicit */_Bool) var_11)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))));
                                var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) arr_2 [15] [i_2])) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned char) arr_10 [i_2] [i_1] [i_3] [i_4])))));
                            }
                        } 
                    } 
                    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_4)) : (1554110123481653990LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (15U)))) : (((unsigned long long int) 4294967280U)));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [6] [i_2] [i_2] [i_6] [i_2] = ((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_6] [i_1] [16] [i_5] [16] [i_6]))) ? (((/* implicit */unsigned int) ((int) -1918967437))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6] [i_6]))) : (2333567691U))));
                                arr_22 [i_0] [i_0] [i_0] [i_6] [14] [i_0] [i_6] = ((((/* implicit */_Bool) ((signed char) arr_0 [(unsigned char)3]))) ? (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) 0U)) : (841385639708436976ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_0] [i_2] [i_0])))))));
                            }
                        } 
                    } 
                    arr_23 [6U] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7746))))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6U)) ? (4294967289U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (-2001481950) : (((/* implicit */int) arr_9 [i_7] [i_7]))))) : (((unsigned int) (_Bool)1))));
                    var_22 &= ((/* implicit */unsigned long long int) ((((_Bool) 6U)) ? (((/* implicit */unsigned int) ((int) (short)9235))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (6U)))));
                    arr_26 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_7] [(unsigned short)13] [i_1] [i_0] [i_1] [i_0] [i_0])) ? (1554110123481653990LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_7] [i_1] [i_1] [i_1] [i_7] [14ULL])))))) ? (((unsigned long long int) arr_20 [i_7] [i_7] [15] [i_1] [i_1] [(unsigned short)14] [i_0])) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_7])))));
                }
                /* vectorizable */
                for (unsigned short i_8 = 1; i_8 < 14; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5604))) : (4294967289U)));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_15 [i_1] [i_9] [i_1]) ? (arr_19 [(unsigned short)16] [i_8] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_9])))))) ? (((((/* implicit */_Bool) 1554110123481653976LL)) ? (arr_10 [(short)2] [i_1] [(unsigned short)4] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_18 [(short)10] [i_1] [i_0] [i_9] [i_10] [i_1]))))))));
                                var_25 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) 14814471012233075194ULL)) ? (-230936492) : (((/* implicit */int) arr_18 [i_0] [15ULL] [i_8] [i_9] [i_0] [i_8])))));
                                var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : (((int) arr_4 [i_8]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            {
                                var_27 = ((((_Bool) 3632273061476476422ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 26U)))) : (((((/* implicit */_Bool) -965685309)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (4241237616354729054LL))));
                                var_28 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (-1907505426))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 1) 
                    {
                        for (int i_14 = 0; i_14 < 17; i_14 += 2) 
                        {
                            {
                                var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4241237616354729075LL)) ? (11977138377389943098ULL) : (15110848587090120960ULL)));
                                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_14] [i_14] [i_14] [i_8] [i_14] [i_14] [i_14]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_39 [i_8] [i_1] [i_1])))))));
                                var_31 = ((/* implicit */unsigned long long int) ((unsigned short) (_Bool)1));
                                var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) var_11))) ? (((((/* implicit */_Bool) arr_6 [i_14] [(unsigned char)16] [i_8])) ? (((/* implicit */unsigned long long int) arr_40 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1])) : (784864409020818798ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_38 [i_14])))))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 17; i_15 += 1) 
                {
                    for (unsigned short i_16 = 0; i_16 < 17; i_16 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) 1907505426)) ? (15110848587090120960ULL) : (((/* implicit */unsigned long long int) var_5)))), (((((/* implicit */_Bool) (short)-12073)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_0] [i_15] [i_16] [i_15] [i_16] [5ULL]) ? (var_5) : (var_1)))) ? (min((((/* implicit */int) (unsigned short)65516)), (arr_36 [i_16]))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)250)))))))));
                            arr_55 [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_16])) ? (-1572249446) : (((/* implicit */int) arr_2 [i_1] [i_15]))))) ? (min((((/* implicit */unsigned long long int) -1907505426)), (18446744073709551615ULL))) : (((((/* implicit */_Bool) 1889780922)) ? (((/* implicit */unsigned long long int) -9223372036854775807LL)) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (((((/* implicit */_Bool) ((long long int) var_10))) ? (((((/* implicit */_Bool) var_6)) ? (arr_14 [i_0] [i_16] [i_15] [i_16] [14U] [i_15] [7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(short)15] [i_16]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-3)))))) : (((((/* implicit */_Bool) ((long long int) (unsigned char)128))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -1959973593)) : (arr_10 [i_16] [i_16] [i_1] [i_16]))) : (((((/* implicit */_Bool) arr_45 [i_1] [i_15] [(_Bool)1])) ? (arr_13 [i_0] [14U] [i_15] [i_16] [(_Bool)1]) : (((/* implicit */unsigned long long int) var_13))))))));
                            arr_56 [i_0] [i_16] [5] [i_0] [16ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18284962550175051106ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53348))) : (arr_0 [i_0])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_0] [i_16] [i_0])), (arr_17 [i_16] [i_15] [i_1] [i_0])))) : (((((/* implicit */_Bool) arr_42 [i_0] [i_16] [i_15] [i_16])) ? (((/* implicit */int) arr_29 [i_16] [i_16] [i_0])) : (arr_24 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0] [i_16])))))) ? (max((((unsigned long long int) var_15)), (((/* implicit */unsigned long long int) ((unsigned short) var_5))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) var_6))))) ? (min((arr_35 [i_16] [i_16] [i_16] [i_16] [5U]), (((/* implicit */int) (signed char)23)))) : (((/* implicit */int) ((_Bool) 13923002125549017236ULL))))))));
                            var_34 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16887127835146750414ULL)) ? (15110848587090120960ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))) ? (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_18 [i_0] [i_1] [(_Bool)1] [i_15] [i_0] [(unsigned short)3]), (((/* implicit */unsigned short) (_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_35 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned int) 1427116032))))) ? (((/* implicit */unsigned int) ((var_15) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_9))))) : (((unsigned int) var_3))))), (max((((((/* implicit */_Bool) 10658571673540763960ULL)) ? (((/* implicit */unsigned long long int) var_4)) : (var_0))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483630)) ? (((/* implicit */int) (unsigned short)34231)) : (((/* implicit */int) (unsigned char)190))))))));
}
