/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234547
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) 8426131965992000017ULL);
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_13 -= ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1]))))) : (min((((/* implicit */unsigned long long int) var_5)), (var_6))));
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? ((~(((long long int) var_7)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (arr_3 [i_1]) : (arr_3 [i_1]))))));
    }
    var_15 = ((/* implicit */int) (~(((unsigned long long int) var_1))));
    var_16 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_7)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) 3337556990U)) >= (var_9))))))));
    /* LoopSeq 4 */
    for (int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_8 [i_2] = (+(((/* implicit */int) ((signed char) arr_7 [i_2]))));
        var_17 &= ((signed char) ((((/* implicit */_Bool) 10020612107717551599ULL)) && (((/* implicit */_Bool) arr_2 [i_2] [i_2]))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_1 [i_3 + 1]))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3 + 1] [i_3 - 1]))) : (((unsigned int) var_0))));
        var_19 ^= ((((((/* implicit */_Bool) (signed char)32)) ? (4398046445568ULL) : (4187859861748129455ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [16ULL])) % (((/* implicit */int) (unsigned short)17072))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 4; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) arr_7 [i_4]);
            var_21 |= ((/* implicit */signed char) (+(10189327070081537442ULL)));
            var_22 = ((/* implicit */unsigned short) 14258884211961422160ULL);
            arr_17 [9] = ((/* implicit */unsigned short) arr_16 [i_4] [i_5]);
        }
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            var_23 ^= ((/* implicit */unsigned short) ((unsigned long long int) (short)32640));
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_4 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48463)) ? (((/* implicit */int) arr_9 [i_4])) : (((/* implicit */int) arr_1 [20LL])))))));
            arr_20 [i_6] [i_4 - 4] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_7 [i_4 + 2]))));
        }
        var_25 = ((/* implicit */signed char) ((arr_3 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_1))))));
        var_26 = ((((((/* implicit */_Bool) arr_11 [(signed char)2])) ? (arr_2 [i_4] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12892))));
    }
    for (long long int i_7 = 2; i_7 < 23; i_7 += 1) 
    {
        var_27 |= var_8;
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (short)-32641))) ? (8426131965992000017ULL) : (min((((((/* implicit */_Bool) 10312568362371174461ULL)) ? (((/* implicit */unsigned long long int) 1757398771288311389LL)) : (var_2))), (((unsigned long long int) 805306368ULL))))));
        var_29 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) ? (var_4) : (((/* implicit */long long int) (-((-(((/* implicit */int) arr_22 [(signed char)16])))))))));
        arr_23 [i_7] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) min((((/* implicit */long long int) arr_22 [i_7])), (var_9)))))));
    }
}
