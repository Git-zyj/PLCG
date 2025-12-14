/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204877
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                arr_5 [(signed char)9] [i_1] = ((/* implicit */long long int) 2897316609569557616ULL);
                arr_6 [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)147)) ? (max((3590057190U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) 1696791387))))) ? (704910105U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)202)))));
                arr_7 [i_0] [i_0] [0ULL] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)14325)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 1])) <= (((/* implicit */int) (signed char)-57)))))) : (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-65)) >= (((/* implicit */int) arr_2 [i_1])))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)52435))) - (70368743915520LL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        arr_10 [i_2] = ((/* implicit */int) arr_9 [i_2] [i_2]);
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 4) 
        {
            arr_13 [(unsigned short)2] [i_2] [i_2] = ((/* implicit */unsigned char) (short)18046);
            arr_14 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_3 - 2])) || (((/* implicit */_Bool) (unsigned char)130))));
            arr_15 [i_3] [(unsigned short)16] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) != (3590057190U)))) >> (((/* implicit */int) arr_12 [i_3]))));
            arr_16 [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48440)) ? (((/* implicit */int) (unsigned short)17103)) : (((/* implicit */int) (unsigned char)125))));
        }
        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            arr_21 [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1982118711U)) ? (((/* implicit */int) (unsigned short)48433)) : (((/* implicit */int) (unsigned short)28193))));
            /* LoopSeq 1 */
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                arr_25 [i_2] [4U] [0ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */int) (unsigned char)10)) : (((((/* implicit */_Bool) (short)-18046)) ? (((/* implicit */int) (unsigned short)12344)) : (((/* implicit */int) (short)-18046))))));
                arr_26 [i_2] [i_4] [(unsigned short)4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (70368743915531LL)))) ? (1497919088U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)36)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)106)))))));
            }
        }
        arr_27 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_2])) ? (((/* implicit */long long int) 2255291625U)) : (-1448079120731727562LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) : (arr_11 [(_Bool)1] [i_2] [(unsigned char)0])))));
        arr_28 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)19150)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) (unsigned short)13369)))) | (((/* implicit */int) (unsigned char)93))));
    }
}
