/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51492
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 += ((/* implicit */_Bool) ((((-6999118154649641733LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)119)) - (80)))));
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_17 &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))) < (((/* implicit */int) ((_Bool) var_10)))));
            arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)67)), (var_12)))) : (var_9)))));
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)9589)) < (((/* implicit */int) (unsigned short)0))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_11 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55946))) / (var_10)))));
            arr_12 [i_2] [i_2] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [i_0] [i_2] [i_0])) : (((/* implicit */int) var_6)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)31)) < (((/* implicit */int) (unsigned char)73)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_3]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [14LL] [i_3])) ? (0LL) : (((/* implicit */long long int) 4115268035U))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3]))))) : (((((/* implicit */_Bool) 12164901373193070586ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (3660900608361566821LL)))) ? (((/* implicit */int) arr_14 [i_0])) : ((-(((/* implicit */int) arr_15 [i_0] [i_3])))))))))));
            var_21 *= ((((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (((/* implicit */int) ((unsigned char) var_2))))) != (((/* implicit */int) ((signed char) arr_0 [i_0]))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (var_5))) : (var_2))) * (var_2)));
            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_0 [i_3]))));
        }
    }
    var_23 = min((max((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)158)) != (((/* implicit */int) var_0))))), (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_13))))))));
    var_24 = ((/* implicit */long long int) (((~(((/* implicit */int) (signed char)11)))) - (((/* implicit */int) ((((/* implicit */int) var_14)) != (((/* implicit */int) var_11)))))));
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) (unsigned short)511)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_4))))))) : (((/* implicit */long long int) min((902662598U), (var_10)))))))));
}
