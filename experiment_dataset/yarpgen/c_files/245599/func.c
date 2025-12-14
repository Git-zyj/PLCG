/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245599
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2973864733568178232LL)) ? (-2973864733568178230LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-32751)))))))) ? ((~(((var_15) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-124)))))))))));
                var_17 -= (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (2973864733568178225LL) : (var_8)))))) ? (((/* implicit */long long int) max((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_7))))), ((+(((/* implicit */int) (unsigned short)6103))))))) : ((+(min((((/* implicit */long long int) arr_0 [i_1])), (var_8))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_18 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -501247723793651262LL)) ? (313087135U) : (((/* implicit */unsigned int) -964957876)))))));
        /* LoopSeq 2 */
        for (int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (6744595540574209212LL)))) ? ((-(((/* implicit */int) (unsigned short)53017)))) : ((~(((/* implicit */int) var_5))))));
                            var_20 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)4176))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
            } 
            arr_22 [i_3] [i_3 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(arr_19 [i_2] [(short)7]))))));
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (3U)))) : ((-(arr_18 [i_2] [i_2]))))))));
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5258275864538813463ULL)) ? ((+(-2973864733568178232LL))) : (2448223197959364880LL)));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(1289624836U)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_1 [i_2] [i_7]) : (((/* implicit */int) arr_19 [i_2] [i_2]))))) : (((((/* implicit */_Bool) var_7)) ? (arr_10 [i_7]) : (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2])))))))));
        }
        arr_26 [i_2] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 8211334437423064964LL)) ? (4294967291U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))));
    }
    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_8)) : (arr_6 [i_8]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)16835)), (1289624837U)))))), (max((min((var_6), (((/* implicit */unsigned long long int) arr_28 [i_8] [(unsigned char)1])))), (((/* implicit */unsigned long long int) min(((short)-32747), (((/* implicit */short) (_Bool)1)))))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) (signed char)-73)) : (-696995255)))) ? ((~(((var_2) ? (((/* implicit */int) var_11)) : (var_9))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned short)44781)) : (-795159807)))) ? (min((((/* implicit */int) arr_0 [i_8])), (var_9))) : (((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (((/* implicit */int) var_0)) : (arr_3 [i_10])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
                    {
                        for (unsigned int i_12 = 0; i_12 < 15; i_12 += 4) 
                        {
                            {
                                arr_41 [i_9] = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) arr_6 [(unsigned short)20])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_8] [i_9] [i_10] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_28 [i_8] [i_9]))))))) : (min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)11986)))), (((/* implicit */int) (!(var_2))))))));
                                var_25 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_12])) ? (-8655434737032795961LL) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12] [i_11] [i_8])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_12] [i_11] [i_10] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) (short)14))) : (2973864733568178225LL)))) ? (((((/* implicit */_Bool) arr_27 [i_8] [i_8])) ? (8655434737032795971LL) : (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)21)) ? (((/* implicit */int) var_13)) : (1048576))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)241)), (var_3)))) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4169)) ? (var_3) : (((/* implicit */unsigned int) -1073741824)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 = ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_8]))))), (((((/* implicit */_Bool) var_10)) ? (arr_29 [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14)))))))), (((((/* implicit */_Bool) max((arr_2 [i_8]), (((/* implicit */unsigned int) var_1))))) ? (((((/* implicit */_Bool) (short)27435)) ? (((/* implicit */long long int) -1047433299)) : (2973864733568178226LL))) : (((/* implicit */long long int) max((arr_40 [i_8] [8LL] [i_8] [i_8] [i_8] [i_8] [i_8]), (-139205723))))))));
        arr_42 [9ULL] [9ULL] = ((/* implicit */unsigned short) (+(2147483637)));
        arr_43 [i_8] = ((/* implicit */short) (-(((/* implicit */int) (short)32751))));
    }
    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 70368744177408ULL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_2))))))) : (((((/* implicit */_Bool) 2574813927385865654ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)22401), ((short)-32740))))) : (70368744144896ULL)))));
}
