/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198752
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
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((4671007306813518206ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6238))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-6238)) / (((/* implicit */int) (short)-32747)))))))) ? (((var_16) ? (((unsigned long long int) var_10)) : (min((var_5), (7654330160537899185ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_2)))) ? (((((/* implicit */_Bool) (short)709)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6238))) : (var_15))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-6239)) / (((/* implicit */int) (short)6238)))))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_0]));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((var_12) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)16]))))))) ? ((+((-(((/* implicit */int) arr_0 [i_0])))))) : ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-6218)))), (((/* implicit */int) min((((/* implicit */short) arr_1 [i_0 - 1])), (arr_0 [i_0]))))))) ? (((((/* implicit */int) min(((short)-6216), ((short)-4059)))) / (((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) (short)-32763)))))) : ((+(((/* implicit */int) max((((/* implicit */short) arr_1 [i_0])), ((short)-6238))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            arr_5 [3U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)253)) << (((((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (((/* implicit */int) var_9)))) + (31733))) - (11)))));
            var_21 = ((/* implicit */unsigned long long int) max((var_21), ((~(var_4)))));
        }
    }
}
