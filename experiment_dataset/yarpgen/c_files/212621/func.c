/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212621
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
    var_19 = ((/* implicit */unsigned short) var_2);
    var_20 -= ((/* implicit */unsigned long long int) var_7);
    var_21 = (!(((/* implicit */_Bool) ((short) ((((/* implicit */int) (short)255)) > (((/* implicit */int) var_1)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((signed char) (short)-1)))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 0ULL));
            var_23 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_0 - 1])) == (((/* implicit */int) (unsigned short)65535))));
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) (unsigned short)18)) : (((((/* implicit */_Bool) (unsigned short)1)) ? (2) : (((/* implicit */int) arr_0 [14ULL]))))));
            var_25 = ((/* implicit */short) var_10);
        }
        for (unsigned short i_2 = 0; i_2 < 17; i_2 += 2) 
        {
            arr_10 [i_0] [i_2] [i_0 + 1] = ((short) (short)(-32767 - 1));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_17 [i_0] = ((/* implicit */_Bool) var_18);
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (((-(-1))) - (((/* implicit */int) ((short) (short)32748))))))));
                        var_27 -= (unsigned short)29;
                    }
                } 
            } 
            arr_18 [i_0 + 4] [i_0] [i_0 + 2] = ((/* implicit */int) ((((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)52161)) - (52145))))) == (((/* implicit */int) ((arr_12 [i_0 + 1] [12ULL]) < (arr_12 [i_0 + 4] [i_2]))))));
        }
        /* LoopSeq 1 */
        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            var_28 ^= ((((/* implicit */int) (short)8190)) < (((/* implicit */int) (short)32766)));
            var_29 += ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_13))))) / (((((/* implicit */_Bool) (short)32755)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (5931923445732313111ULL))));
        }
        var_30 -= ((/* implicit */unsigned char) ((int) ((short) arr_9 [(_Bool)1])));
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_31 = ((unsigned short) 12514820627977238505ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    arr_27 [i_6] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (signed char)-10)))))) > (((((/* implicit */int) max((arr_21 [(unsigned short)8] [i_6]), (((/* implicit */unsigned short) arr_24 [(unsigned short)7]))))) ^ (((/* implicit */int) ((_Bool) var_14)))))));
                    arr_28 [i_6] [i_7] [i_6] = ((_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (2147483647))) >> (((((/* implicit */int) (short)32748)) - (32732)))))) ? (((((/* implicit */_Bool) arr_16 [(short)2] [i_7] [i_6] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-32742)))) : (((/* implicit */int) ((((/* implicit */int) (short)8181)) < (((/* implicit */int) (short)-32755)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (short i_10 = 1; i_10 < 8; i_10 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_23 [i_10 + 1])), (((int) (signed char)12))));
                            arr_36 [i_8] [i_6] [i_8] [10] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (arr_11 [i_9 + 4] [i_10 + 4] [i_10 + 1] [i_10 + 4])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_9 + 3] [i_10 + 4] [i_10 + 3] [i_10 + 1])) ? (((/* implicit */int) (short)-32741)) : (((/* implicit */int) var_15)))))));
                        }
                        var_33 *= ((/* implicit */short) ((((((/* implicit */int) (short)32748)) / (((/* implicit */int) arr_3 [i_9 + 4] [(short)0] [i_7])))) ^ (((/* implicit */int) arr_3 [i_9 + 4] [(unsigned short)16] [i_7]))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 12; i_11 += 1) /* same iter space */
    {
        var_34 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_11])) != (((int) arr_14 [i_11] [i_11] [i_11]))));
        arr_39 [i_11] [i_11] = (unsigned short)65535;
    }
    var_35 = ((/* implicit */unsigned short) ((unsigned long long int) var_1));
}
