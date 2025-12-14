/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49956
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((((/* implicit */short) var_9)), (var_7))))) ? (max((((((/* implicit */int) var_6)) >> (((-1074937554) + (1074937581))))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9))))))) : ((-(((/* implicit */int) max(((unsigned char)103), (((/* implicit */unsigned char) var_11)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_13 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)32767)), (4294967295U)));
        var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) >> ((((+(((/* implicit */int) (unsigned char)153)))) - (124))))))));
    }
    for (unsigned char i_1 = 4; i_1 < 15; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned long long int) arr_1 [i_1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) (short)9079))))) : ((+(1794541297U)))));
        var_16 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */unsigned long long int) (unsigned char)247)), (13370425640544629290ULL)))));
    }
    for (unsigned char i_2 = 4; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_17 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_2])) ^ (min((((/* implicit */int) arr_5 [i_2])), (-1933454291))))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_18 = ((/* implicit */signed char) (~(((((arr_2 [i_2 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_3]))) : (0LL))) - (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))));
            var_19 ^= arr_4 [i_2 - 3];
        }
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            arr_12 [(unsigned char)3] [i_2] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) / (7253461856871015500LL)))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) min((((/* implicit */short) ((signed char) min((((/* implicit */unsigned long long int) arr_7 [i_4] [i_2 + 2])), (262143ULL))))), ((short)-9076))))));
        }
    }
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned char)115)))))) ? (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) 801900225)) & (var_2))))) : (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) ((short) var_4))))))));
}
