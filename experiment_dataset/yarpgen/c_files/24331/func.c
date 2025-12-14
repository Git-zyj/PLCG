/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24331
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) ? (((/* implicit */unsigned int) var_0)) : ((-(arr_1 [i_0 - 1])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0])) : (-7036765547005814320LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)131)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1 + 2]))) : (1525524676U)))) : (((((arr_2 [i_1]) != (((/* implicit */long long int) 2392671426U)))) ? (((/* implicit */long long int) var_8)) : (956523453081386158LL))))))));
            var_18 = ((/* implicit */signed char) ((arr_3 [i_1]) < ((((!(((/* implicit */_Bool) 3924518032U)))) ? (min((((/* implicit */long long int) (unsigned char)201)), (-956523453081386158LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_2 [i_1 + 2]))))))));
            arr_7 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((((/* implicit */int) (unsigned char)126)) | (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_1 + 2])))) == (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_1 [i_0]))))))))));
            var_19 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (unsigned short)9034))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0 - 1]);
            arr_11 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) 1790508687069032653LL)) ? (((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) arr_6 [i_0 - 1] [i_0 - 1])));
            var_21 = ((/* implicit */int) (_Bool)1);
        }
    }
    for (signed char i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) arr_15 [i_3] [i_4] [i_4])), (((unsigned long long int) (unsigned short)15549)))) << (min((((/* implicit */unsigned int) arr_17 [i_4 - 1] [i_4])), (((((/* implicit */unsigned int) var_11)) + (2392671426U))))))))));
            var_23 = ((/* implicit */signed char) var_8);
            var_24 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_13 [i_3])))) - (((var_13) ? (min((((/* implicit */long long int) var_11)), (var_16))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)161)))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 8; i_5 += 3) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_20 [i_3] [i_5 + 3] [i_5 + 1]))));
            var_26 = (~(arr_12 [i_3] [i_3]));
        }
        arr_21 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)116)), (-70353896)))) ? (((((/* implicit */long long int) var_6)) ^ (var_12))) : (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9))) : (8945299697220631528LL))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) (unsigned char)5)))))))));
    }
    for (unsigned char i_6 = 2; i_6 < 11; i_6 += 4) 
    {
        var_27 = ((/* implicit */unsigned short) ((min((((int) arr_22 [i_6])), (((/* implicit */int) ((1902295865U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_6 + 3])))))))) < ((+(((/* implicit */int) ((var_14) && (((/* implicit */_Bool) arr_24 [i_6 + 2])))))))));
        arr_25 [i_6] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned short)63506)) ? (arr_22 [i_6]) : (arr_22 [i_6 + 1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 1525524662U)) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) (unsigned char)198)))))))) != (((((/* implicit */_Bool) -3647730014076023272LL)) ? (((/* implicit */unsigned long long int) -435000964)) : (((unsigned long long int) -7837025457726145371LL))))));
    }
    var_28 = ((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_0))))), (min((var_0), ((~(((/* implicit */int) (unsigned char)198))))))));
    var_29 = ((/* implicit */long long int) -435000975);
}
