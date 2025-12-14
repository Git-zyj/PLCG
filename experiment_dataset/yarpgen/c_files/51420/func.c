/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51420
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
    var_16 ^= ((/* implicit */int) ((unsigned char) var_2));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        arr_2 [(signed char)6] &= ((/* implicit */signed char) ((int) (short)32767));
        arr_3 [(signed char)8] [i_0] &= ((/* implicit */_Bool) 2389842966788772832LL);
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 1) 
    {
        var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_15))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((((/* implicit */int) (short)-32766)) + (2147483647))) >> (((((/* implicit */int) var_13)) - (41))))) <= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)32))))))))));
        var_18 = ((/* implicit */signed char) min((((((7696581394432ULL) % (((/* implicit */unsigned long long int) 3771459343U)))) * (max((((/* implicit */unsigned long long int) 3244809760548822191LL)), (16632719639429582603ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) % (var_3)))) ? ((+(var_7))) : (((/* implicit */unsigned int) ((int) 18248082633966988751ULL))))))));
    }
    for (unsigned short i_2 = 1; i_2 < 6; i_2 += 1) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(2389842966788772832LL)))) == (((((/* implicit */unsigned long long int) min((2147483647LL), (((/* implicit */long long int) (short)32766))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32748))) & (1814024434279969012ULL)))))));
        var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) 11329521909829317973ULL)) ? (12594364679664119966ULL) : ((+(1814024434279969024ULL))))));
    }
    var_21 = ((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-19091)) : (((/* implicit */int) (short)-21052))));
}
