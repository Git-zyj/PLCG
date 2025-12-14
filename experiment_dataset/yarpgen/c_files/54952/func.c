/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54952
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */int) (short)29816)), ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-25699)) : (var_13)))))));
    var_15 = ((/* implicit */unsigned short) (+(var_2)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */unsigned int) var_10)) ^ ((((!(((/* implicit */_Bool) 16128U)))) ? (max((16142U), (16114U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
        var_17 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) var_8)) ? (9223372036854775807LL) : (((/* implicit */long long int) arr_2 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))))), (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned char i_1 = 2; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((signed char) (signed char)-1))), (((((/* implicit */_Bool) min((arr_4 [i_1]), (((/* implicit */unsigned char) arr_5 [i_1]))))) ? (var_10) : (((/* implicit */int) ((_Bool) arr_4 [(signed char)15])))))));
            arr_8 [i_1] [i_2] = ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)32353)) : (((/* implicit */int) (unsigned short)32353))))))) ^ (4294951128U));
        }
        /* vectorizable */
        for (short i_3 = 2; i_3 < 18; i_3 += 2) 
        {
            arr_11 [i_1 + 2] = ((/* implicit */unsigned short) var_11);
            var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)111)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_10 [(signed char)4]))))) ? (16142U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_3 + 3] [i_3] [i_3])))));
            arr_12 [i_3] = ((/* implicit */unsigned long long int) ((signed char) var_5));
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_5 [i_1 - 2]))));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((-(((/* implicit */int) arr_3 [i_1])))) ^ (((int) (unsigned char)0)))))));
        }
        /* vectorizable */
        for (signed char i_4 = 2; i_4 < 18; i_4 += 4) 
        {
            var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0)))));
            var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)25844))) ^ (252441954199605770ULL)))) ? (((/* implicit */int) arr_3 [i_1 + 3])) : (((/* implicit */int) ((signed char) arr_3 [(signed char)18])))));
            var_23 &= ((/* implicit */int) (!(((/* implicit */_Bool) (+(503316480))))));
        }
        var_24 &= ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)227)), (((16190U) ^ ((-(16146U)))))));
        arr_16 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) (~(var_13)))))));
        var_25 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 + 1]))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [(short)2] [i_1]))) ^ (var_5)))))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        arr_20 [3LL] [i_5] = ((/* implicit */long long int) min(((-(max((16142U), (4294951144U))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_5])) ^ (131040))))));
        arr_21 [(short)14] |= ((/* implicit */unsigned long long int) ((short) 16146U));
    }
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((_Bool) ((unsigned short) (+(((/* implicit */int) (unsigned short)34475)))))))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */_Bool) (short)14454)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) : (4294951154U)))))) ? (((/* implicit */unsigned int) var_13)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (unsigned char)251)) : (((/* implicit */int) (signed char)0))))) ? (var_3) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_6])) ? (((/* implicit */int) arr_19 [i_6])) : (((/* implicit */int) var_12)))))))));
    }
    for (unsigned char i_7 = 0; i_7 < 25; i_7 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */long long int) max((var_28), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_2)) ^ (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_7] [i_7]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_7]))) ^ (4294951144U)))))) ? (((/* implicit */long long int) (~((+(4294951128U)))))) : ((-((~(93406033217816811LL)))))))));
        var_29 = ((/* implicit */int) ((min((((/* implicit */unsigned int) (_Bool)1)), (466275544U))) ^ (max((((/* implicit */unsigned int) (+(var_10)))), (((((/* implicit */unsigned int) var_9)) ^ (var_3)))))));
        var_30 = var_8;
        var_31 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) (unsigned short)58230)) : (((/* implicit */int) (unsigned char)0))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_7] [i_7]))) ^ (var_6)))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 25; i_8 += 4) /* same iter space */
    {
        var_32 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_6)))));
        var_33 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) 2147483645)))));
        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)1))));
        var_35 = ((/* implicit */unsigned int) arr_27 [i_8] [i_8]);
    }
}
