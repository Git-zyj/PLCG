/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204817
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
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((max((((/* implicit */unsigned int) var_15)), (1936288486U))), (min((2976774382U), (3454623428U)))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
    var_20 = ((/* implicit */signed char) (+(((/* implicit */int) ((short) ((0ULL) != (((/* implicit */unsigned long long int) var_4))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    var_21 += ((/* implicit */short) arr_0 [8LL]);
                    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) max((arr_5 [i_0] [i_2]), (((/* implicit */unsigned int) (!(((((/* implicit */_Bool) (unsigned char)94)) || (((/* implicit */_Bool) (unsigned short)65515))))))))))));
                    var_23 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_1])), (max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min(((signed char)90), ((signed char)71)))), (max((((/* implicit */unsigned short) (signed char)2)), ((unsigned short)65502))))))));
                    arr_9 [i_0 - 1] [i_0] [i_0] [i_0 - 1] = ((/* implicit */unsigned char) arr_3 [i_0 + 1]);
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned short) (signed char)-58);
        arr_10 [i_0] [i_0] = max((max((((/* implicit */unsigned long long int) ((5235431916047482699ULL) < (arr_0 [i_0])))), (((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0])) + (18416610693401143962ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) || (((/* implicit */_Bool) arr_3 [i_0 + 2]))))));
        var_25 = ((/* implicit */signed char) (unsigned char)190);
        /* LoopNest 2 */
        for (short i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */int) ((short) var_14))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_13 [i_0 + 1] [i_0 + 1] [i_0 + 1]), ((signed char)-28))))) < (((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1] [16U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_3] [i_4]))))))));
                    var_27 *= ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)0)) / ((~(((/* implicit */int) (short)1689)))))) >= (((/* implicit */int) arr_6 [i_3]))));
                    arr_15 [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (arr_1 [i_3 + 1] [i_4]))) : (((arr_5 [i_0] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190)))))))) ? (((((/* implicit */_Bool) max(((signed char)127), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_6 [i_0 + 1])), (arr_7 [i_4] [i_4] [i_3] [i_0 + 1]))))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [(unsigned short)7] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_3] [i_0])))));
                    var_28 = ((/* implicit */int) max((var_28), (((((/* implicit */_Bool) arr_12 [i_0] [i_3])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_3 - 2])) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) arr_14 [i_0 - 1] [i_3] [i_4]))))) ? (((/* implicit */int) arr_14 [i_0] [i_3] [i_4])) : ((+(((/* implicit */int) (signed char)30)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) < (((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */unsigned long long int) arr_5 [i_4] [i_4])) : (arr_0 [(signed char)9]))))))))));
                }
            } 
        } 
    }
}
