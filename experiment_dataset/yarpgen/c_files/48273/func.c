/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48273
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
    var_13 = ((/* implicit */unsigned int) max((var_13), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (17719576030112617449ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */unsigned int) -508483327)) : (2523948272U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) | (((/* implicit */int) (short)0)))))))))));
    var_14 |= ((/* implicit */_Bool) 4294967280U);
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)-1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) var_6)) : (max((((((/* implicit */_Bool) (short)-16304)) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) var_9)))), (((/* implicit */int) (short)-9446))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_16 += ((/* implicit */short) arr_1 [i_0] [(_Bool)1]);
        arr_3 [i_0] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)10])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (-7326435846780469793LL)));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) 7955841115236297458ULL))) ? (((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) : ((~(arr_0 [5ULL]))))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 1045029751)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (-464627281)));
    }
}
