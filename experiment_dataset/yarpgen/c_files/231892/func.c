/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231892
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) min((((((long long int) arr_3 [i_0] [i_0])) | (((((/* implicit */_Bool) 10111054944972117204ULL)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))), ((~(-9184010703918867908LL)))));
        var_19 *= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (min((((/* implicit */long long int) (_Bool)1)), (arr_1 [9LL]))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_21 = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (755530487U)))) - (14907753284862174862ULL));
        var_22 = ((/* implicit */_Bool) (-(((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (4427680307401380216LL))) / (((/* implicit */long long int) ((/* implicit */int) var_18)))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                {
                    arr_12 [i_3] [i_2] [i_3] = ((/* implicit */_Bool) arr_11 [i_1]);
                    arr_13 [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (max((((/* implicit */int) (short)16237)), (-973228035))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -9184010703918867928LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (17097581439692686967ULL))))));
                    arr_14 [i_2] [i_2] [13ULL] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_17))))))) % (((((((/* implicit */_Bool) arr_7 [i_1] [i_2])) || (((/* implicit */_Bool) arr_8 [i_3])))) ? (arr_7 [(unsigned char)16] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (unsigned short i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                {
                    var_24 = ((/* implicit */_Bool) max((arr_20 [i_6]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16237))) >= (0ULL))))));
                    var_25 -= ((/* implicit */unsigned long long int) var_7);
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */unsigned long long int) (~(arr_18 [i_5] [i_6 - 1] [i_6 + 2])))) : (((unsigned long long int) var_17))));
                }
            } 
        } 
    } 
}
