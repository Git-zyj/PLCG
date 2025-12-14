/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230780
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
    var_10 -= ((/* implicit */unsigned long long int) var_0);
    var_11 = ((/* implicit */short) ((signed char) var_5));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((signed char) arr_2 [i_0]))), (var_9)));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_0 [i_0]), (arr_0 [i_0])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_9) : (((/* implicit */long long int) min((-1299642326), (((/* implicit */int) (unsigned char)162)))))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 2) 
    {
        var_14 = ((/* implicit */_Bool) arr_5 [i_1]);
        var_15 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1]))) : (var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))));
        var_16 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) 1299642326)) != (1604820537U)));
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) arr_1 [(_Bool)1])))), (((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_3 [i_2]))))));
        arr_10 [i_2] = ((/* implicit */int) ((unsigned long long int) 12610597030466399121ULL));
        var_17 = ((/* implicit */long long int) arr_3 [i_2]);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */unsigned long long int) ((var_9) % (((/* implicit */long long int) arr_13 [i_3]))))) : (17473325621243663507ULL)));
        arr_14 [i_3] = ((/* implicit */signed char) (unsigned char)94);
    }
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 1 */
    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        arr_18 [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) & (((arr_0 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4])))))));
        var_20 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)4)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-54))))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (var_8)))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) var_3)), (arr_0 [i_4])))) : (var_8))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((signed char) arr_16 [i_4]))), (var_5)))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_0 [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (arr_17 [i_4]) : (6829259011587760236ULL)))));
    }
}
