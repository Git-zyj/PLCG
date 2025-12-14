/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48437
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
    var_12 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (~((+(var_3)))))), (var_6)));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) 3330529312U)) ? (144115188059078656LL) : (-144115188059078657LL)))))) < (((((/* implicit */_Bool) var_1)) ? (max((((/* implicit */unsigned long long int) -144115188059078651LL)), (17097291144586550431ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (-432264872609830343LL) : (144115188059078656LL))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)196)) ? (((/* implicit */unsigned long long int) 144115188059078656LL)) : (arr_1 [(signed char)11] [i_0 + 2]))), (((/* implicit */unsigned long long int) var_9))));
        var_13 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-18601)), (17097291144586550431ULL)));
    }
}
