/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227428
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
    var_14 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)29510))));
    var_15 ^= ((/* implicit */unsigned long long int) max((max((var_0), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? ((-(((/* implicit */int) (short)-23559)))) : (((((/* implicit */int) (short)29502)) + (var_13))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-11))));
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) ((777903256) << (0LL)))) : (18218743218832170751ULL)))) ? (var_2) : (((/* implicit */int) ((unsigned char) 13042476654800147882ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                    {
                        {
                            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [(signed char)18] [i_3] [i_4] [i_2])) ? (((/* implicit */int) ((unsigned char) (short)23547))) : (arr_4 [i_2])));
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_12))));
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 22; i_6 += 3) 
                            {
                                var_20 = 985426473948739556LL;
                                var_21 = ((/* implicit */signed char) (~(var_11)));
                            }
                            for (short i_7 = 1; i_7 < 20; i_7 += 3) 
                            {
                                var_22 ^= ((/* implicit */unsigned short) ((unsigned char) var_7));
                                var_23 ^= ((/* implicit */signed char) (-(15310883441051861171ULL)));
                                var_24 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((9223372036854775780LL), (((/* implicit */long long int) arr_9 [13]))))) ? ((+(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32760))))), (((/* implicit */unsigned long long int) arr_5 [i_4]))));
                                var_25 = ((/* implicit */long long int) 2063687422);
                            }
                            for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                            {
                                var_26 = ((/* implicit */unsigned int) ((short) var_11));
                                var_27 = ((/* implicit */unsigned char) 5481905191071350305ULL);
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45509))) * (((((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_3] [i_3] [i_5 - 3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) > (8517188916326416866LL))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_18 [i_3] [i_2] [i_3] [i_2] [i_3])) : (3135860632657690444ULL)))))));
                                var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) 12964838882638201310ULL)) ? (15310883441051861165ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2]))))), (((((/* implicit */_Bool) arr_9 [i_8])) ? (12964838882638201294ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2])))))));
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((_Bool) arr_6 [(signed char)6]))) : (((/* implicit */int) (short)-22077))))) ? (((((/* implicit */_Bool) 5481905191071350319ULL)) ? (5481905191071350323ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) min((arr_6 [i_3]), (((/* implicit */unsigned short) (_Bool)1))))) : (min((var_12), (var_13))))))));
                var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)-52)), (((((/* implicit */_Bool) (unsigned char)24)) ? (arr_13 [i_2] [i_3] [i_3] [i_3]) : (arr_13 [i_2] [i_2] [i_2] [i_2])))));
                var_32 = ((/* implicit */unsigned short) (_Bool)1);
            }
        } 
    } 
}
