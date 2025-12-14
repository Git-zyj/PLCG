/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219069
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
    var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) min((((/* implicit */short) ((unsigned char) var_1))), (var_7))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [10ULL])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned short)34668)) * (((/* implicit */int) (unsigned short)26894))))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)97)))), (((((/* implicit */int) arr_1 [11U] [i_0])) % (((/* implicit */int) arr_0 [i_0] [i_0]))))))) % (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_1 [i_0] [i_0])), (arr_2 [(unsigned short)1])))), ((~(var_0))))))))));
        var_14 = max((((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned char)116)) ^ (((/* implicit */int) (unsigned short)59802))))))), (((unsigned int) arr_2 [i_0])));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))) : (min((arr_4 [i_1]), (arr_4 [i_1]))));
        var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) max(((short)20563), (((/* implicit */short) arr_5 [i_1]))))), (min(((~(634119890U))), (((/* implicit */unsigned int) arr_5 [i_1]))))));
        var_16 = ((/* implicit */unsigned short) min((max((arr_4 [i_1]), (arr_4 [i_1]))), (((/* implicit */unsigned int) min((364925645), (((/* implicit */int) var_9)))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)97))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [(unsigned short)4])), (var_1)))) : (((((/* implicit */int) arr_5 [i_1])) - (((/* implicit */int) (unsigned char)179))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65521)) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (short)-20593))))) - (min((max((((/* implicit */unsigned int) arr_10 [(unsigned short)14] [(unsigned short)14])), (3660847406U))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_5 [i_2])), ((short)-20564))))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(arr_10 [i_2] [i_2])))) != ((~((-(arr_4 [i_2])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3])) % ((+(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_9)) : ((~((+(arr_10 [i_3] [i_3])))))));
        var_20 ^= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (max((arr_12 [i_3] [i_3]), (((/* implicit */unsigned int) arr_5 [i_3])))) : (((0U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6443))))))));
        var_21 = var_1;
    }
    var_22 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)105))))), (((var_0) - (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (short)-1)) <= (((/* implicit */int) var_8))))))))));
    var_23 = ((/* implicit */unsigned int) var_1);
}
