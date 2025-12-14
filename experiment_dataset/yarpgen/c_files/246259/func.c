/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246259
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (-27422496605371486LL)));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_1 [i_0])))) ? (min((0LL), (((/* implicit */long long int) (signed char)-54)))) : (min((arr_1 [i_0]), (arr_0 [i_0] [i_0])))));
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 10; i_1 += 4) 
    {
        for (signed char i_2 = 1; i_2 < 12; i_2 += 4) 
        {
            {
                var_14 = ((/* implicit */signed char) max((max((((/* implicit */long long int) var_3)), (var_8))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_4)))) || (((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 9665252414812949363ULL)))))))));
                arr_10 [i_2] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_3)))))));
                arr_11 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65525)) <= (((/* implicit */int) (unsigned char)126))))), ((signed char)16))))) : (min((((/* implicit */long long int) -1)), (var_2)))));
                arr_12 [i_1] [i_1] [i_2] = ((/* implicit */signed char) min((-5641494919080648618LL), (((/* implicit */long long int) min((min((var_1), (((/* implicit */unsigned int) arr_7 [i_2] [i_1])))), (((/* implicit */unsigned int) ((unsigned char) arr_5 [i_1] [i_1]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_4);
    var_16 = ((/* implicit */unsigned char) var_8);
    var_17 -= ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) -5460023326686015349LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (-1LL))), (((/* implicit */long long int) var_10)))) ^ (var_8)));
}
