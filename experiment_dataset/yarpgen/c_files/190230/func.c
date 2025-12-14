/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190230
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) min((max((((/* implicit */long long int) min((((/* implicit */short) (unsigned char)58)), (arr_4 [i_0] [(_Bool)1] [(_Bool)1])))), (min((((/* implicit */long long int) (_Bool)1)), (var_3))))), (((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_4 [i_0 - 1] [(unsigned short)6] [14U])), (var_8))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0 + 3])), (arr_3 [i_0 + 2] [i_1 - 1])))))))));
                    arr_7 [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_11)), (3208257201847819487LL)))), (max((var_5), (((/* implicit */unsigned long long int) 144115187807420416LL)))))), (max((((/* implicit */unsigned long long int) 144115187807420424LL)), (1048064ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) max((max((-1LL), (min((-144115187807420394LL), (((/* implicit */long long int) (short)(-32767 - 1))))))), (max((max((((/* implicit */long long int) (unsigned short)41127)), (3208257201847819504LL))), (((/* implicit */long long int) max((((/* implicit */int) arr_5 [(short)6] [(unsigned char)16] [(unsigned char)13])), (arr_12 [i_3] [i_4] [i_3] [i_3]))))))));
                    var_15 = ((/* implicit */_Bool) max((max((max((((/* implicit */unsigned long long int) (unsigned short)0)), (var_5))), (max((var_0), (var_5))))), (((/* implicit */unsigned long long int) max((-3208257201847819495LL), (-3208257201847819505LL))))));
                    var_16 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) (unsigned short)0)), (var_0))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (3208257201847819504LL)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((var_12), (arr_5 [i_3] [9ULL] [(unsigned short)5])))), (max((((/* implicit */unsigned short) arr_1 [i_3] [i_3])), (arr_3 [14ULL] [i_5]))))))));
                }
            } 
        } 
    } 
    var_17 = max((min((((/* implicit */long long int) max((((/* implicit */int) var_10)), (602439704)))), (max((((/* implicit */long long int) var_6)), (var_3))))), (((/* implicit */long long int) min((min((1675274016U), (((/* implicit */unsigned int) (signed char)-107)))), (max((0U), (((/* implicit */unsigned int) (_Bool)1))))))));
    var_18 = ((/* implicit */_Bool) min((max((max((((/* implicit */long long int) var_4)), (3208257201847819487LL))), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_4))))))), (max((((/* implicit */long long int) max(((unsigned char)255), (var_12)))), (min((((/* implicit */long long int) (_Bool)1)), (3208257201847819531LL)))))));
}
