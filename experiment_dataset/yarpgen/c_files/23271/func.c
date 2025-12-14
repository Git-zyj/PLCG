/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23271
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23271 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23271
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [(_Bool)1] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [(unsigned short)9]))))) ? (((((/* implicit */int) (unsigned char)56)) + (((/* implicit */int) (unsigned short)40145)))) : (((((/* implicit */int) (unsigned short)25388)) >> (((var_2) - (8963388884410871555ULL))))))) < (((((/* implicit */_Bool) 1314529657U)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)40136)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_9)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [2ULL] [i_0]))) : (((6108700224914146862ULL) - (13708522036789560083ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */_Bool) var_5);
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_3 = 4; i_3 < 15; i_3 += 4) 
            {
                var_15 = min((((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)25375)))) >= (((((/* implicit */int) var_9)) & (((/* implicit */int) var_0))))))), (((((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_3 - 4])) ? (((/* implicit */int) arr_9 [i_2])) : (arr_4 [i_1]))));
                arr_16 [i_1] [i_2] = (+(((18446744073709551611ULL) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23936))) * (2427863856958353498ULL))))));
            }
            var_16 &= (unsigned short)0;
            arr_17 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) (short)-32749)), (arr_15 [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */unsigned int) var_12)) : (((((/* implicit */_Bool) 18446744073709551599ULL)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) : ((~(arr_8 [i_2] [5ULL] [i_1])))))));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((arr_15 [i_4] [i_4] [i_4] [6]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25404)) ? (16018880216751198128ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) || (((/* implicit */_Bool) var_2))))))));
        var_18 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) * (23ULL))), (((/* implicit */unsigned long long int) arr_13 [i_4] [i_4] [i_4] [i_4]))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_5 = 3; i_5 < 19; i_5 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_2))));
        arr_24 [(short)2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_5] [0ULL]))));
        var_20 = ((/* implicit */unsigned int) (((_Bool)1) ? (((max((arr_23 [i_5] [16ULL]), (((/* implicit */unsigned long long int) var_12)))) - (((/* implicit */unsigned long long int) 3516834616U)))) : (max((((/* implicit */unsigned long long int) arr_22 [i_5 - 1])), (((arr_23 [i_5] [i_5]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43727)))))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 20; i_6 += 2) 
        {
            arr_27 [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) var_5)) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)24027)))))) / (((/* implicit */int) var_0))));
            arr_28 [i_6] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_6 - 1] [i_6]))) / (((((/* implicit */_Bool) (unsigned short)40143)) ? (4738222036919991524ULL) : (((/* implicit */unsigned long long int) arr_22 [i_5]))))));
        }
    }
    var_21 -= ((/* implicit */unsigned int) min((((/* implicit */short) ((((/* implicit */int) (unsigned char)106)) != ((~(var_12)))))), ((short)21229)));
}
