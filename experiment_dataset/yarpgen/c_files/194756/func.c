/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194756
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
    var_16 -= ((/* implicit */signed char) var_12);
    var_17 = ((/* implicit */unsigned short) var_0);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)51006), (((/* implicit */unsigned short) (short)-28262)))))) != (((((/* implicit */_Bool) (short)28261)) ? (var_8) : (var_6)))))) : (var_14)));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) (short)15666)) & (((/* implicit */int) (short)15666)))))));
        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-11814)))))));
        var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15684))) : (var_6))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)203)) && (((/* implicit */_Bool) var_6))))))));
        var_22 &= ((unsigned short) min((min((var_12), (((/* implicit */unsigned short) (unsigned char)206)))), (((/* implicit */unsigned short) min((((/* implicit */short) var_0)), ((short)-28259))))));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_5 [(short)0] = ((/* implicit */long long int) 2990380551272238500ULL);
        var_23 *= ((/* implicit */unsigned short) ((min((var_9), (arr_3 [i_1] [i_1]))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1] [i_1])))))));
        var_24 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
        arr_6 [i_1] [i_1] = ((((((/* implicit */_Bool) arr_1 [i_1])) && (((/* implicit */_Bool) var_0)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (_Bool)1);
        var_25 -= max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) < (((((/* implicit */int) (short)-15664)) & (((/* implicit */int) (short)28258))))))), (((unsigned long long int) arr_2 [i_2])));
        arr_11 [i_2] = ((/* implicit */short) (unsigned short)1024);
        arr_12 [i_2] = ((/* implicit */short) var_6);
    }
    for (int i_3 = 1; i_3 < 11; i_3 += 2) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)28260)) / (((/* implicit */int) (unsigned char)50))));
        var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))) | (16299662488955838149ULL)));
        var_27 *= ((/* implicit */short) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) arr_4 [i_3 + 1])) < (((/* implicit */int) arr_4 [i_3 - 1])))))));
        var_28 |= ((/* implicit */short) ((_Bool) (unsigned short)47128));
        arr_16 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) (short)15663));
    }
}
