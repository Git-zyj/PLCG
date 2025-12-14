/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221387
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-982539144), (((/* implicit */int) var_8))))) ? ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_5))) ? (max((13306593181390489310ULL), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (-1218250364)))))) : (((((/* implicit */_Bool) var_5)) ? (((13306593181390489294ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */unsigned int) 13306593181390489323ULL);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 3) 
                            {
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((arr_2 [i_4 + 1]) * (arr_2 [i_4 - 2]))))));
                                var_16 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4] [i_1 - 1])) ? (((/* implicit */int) arr_4 [i_1] [i_1 - 3])) : (((/* implicit */int) var_7))));
                                var_17 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_4 + 1] [i_4 + 1] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1 - 2] [i_0] [i_0] [i_0]))) : (arr_11 [i_0 - 1] [i_0 - 1] [i_1 + 1] [i_0 - 1] [i_1 + 1] [i_4 + 1])));
                                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_8)) < (((int) (unsigned short)65509)))))));
                                var_19 *= ((/* implicit */unsigned int) ((3634098606U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65460)))));
                            }
                            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0 + 1]))) ? (((min((((/* implicit */unsigned long long int) (unsigned char)41)), (arr_10 [i_0] [(signed char)5] [i_2] [i_3]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_8), (var_8))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 136902082560ULL)) ? (13306593181390489310ULL) : (((/* implicit */unsigned long long int) 2162593946U))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-4))))) : (4294967273U)))))))));
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1674045797)) ? (4260469109U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 9223372036854775807LL)))))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_8 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (unsigned char)27)))))) : (((unsigned int) -1027085450))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 3) 
        {
            {
                arr_18 [i_6] = ((((/* implicit */_Bool) var_0)) ? (max((13306593181390489317ULL), (((/* implicit */unsigned long long int) (unsigned short)25338)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_6 - 2])) || (((/* implicit */_Bool) 1674045797)))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 17; i_8 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1674045811)) ? (-8125433840055699743LL) : (((/* implicit */long long int) 1452205631)))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) -1452205620)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5)))) : (-1150804638))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1452205632)) ? (((/* implicit */int) (_Bool)1)) : (2147483638))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)55776)) || (((/* implicit */_Bool) 1231674243U)))))))) ? (((long long int) arr_23 [i_6 - 1] [i_6] [i_8 - 2] [i_6 - 1])) : (((/* implicit */long long int) ((/* implicit */int) max((arr_24 [i_5] [i_5]), (((/* implicit */signed char) var_7))))))));
                            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)63488)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(signed char)2])))))) >= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)644))) : (arr_13 [i_7 + 1])))))) - (-1928541060)));
                        }
                    } 
                } 
            }
        } 
    } 
}
