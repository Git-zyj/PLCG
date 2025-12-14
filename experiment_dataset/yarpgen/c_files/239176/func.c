/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239176
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
    var_17 = ((/* implicit */int) ((1370086287U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_13))))))))));
    var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) (short)8534))))) >= (((/* implicit */int) ((unsigned short) (short)-1))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (min((((/* implicit */int) ((signed char) var_5))), (((-1) * (5)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) % (18446744073709551615ULL))))))) <= (((/* implicit */int) ((short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]))))))));
                arr_7 [i_0] [7] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) -1882679943)) <= (13509833861652324464ULL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    arr_10 [i_0] [i_2] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) 18446744073709551603ULL))) % (((8ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12906)))))));
                    arr_11 [i_0] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (short)26255)))));
                    arr_12 [6U] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)38493)))))));
                    arr_14 [i_0] [2U] [i_2] = ((/* implicit */unsigned int) var_11);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 4; i_4 < 15; i_4 += 4) 
        {
            arr_20 [i_4] = ((/* implicit */_Bool) ((unsigned int) var_7));
            arr_21 [i_3] [i_3] = ((/* implicit */short) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (13509833861652324443ULL)))));
            arr_22 [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)182))));
        }
        arr_23 [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) <= (arr_16 [i_3]))) ? (((/* implicit */long long int) var_4)) : (((long long int) (short)-32761))));
        arr_24 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_3] [i_3]))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) + (4936910212057227147ULL))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            arr_34 [i_3] [i_8] [i_3] [i_3] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) -23)))));
                            arr_35 [i_8] [i_5] [i_7] [i_6] [i_5] [i_3] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -13LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_6] [i_6])))))));
                            arr_36 [2] [i_5] [i_6] [4U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_5] [(short)17]))) ^ (((unsigned int) 1927083293U))));
                        }
                        arr_37 [i_3] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */short) arr_15 [(unsigned char)12] [i_6]);
                    }
                } 
            } 
        } 
    }
    for (short i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        arr_40 [(_Bool)1] [i_9] = ((/* implicit */short) var_3);
        arr_41 [i_9] = ((/* implicit */unsigned int) var_1);
        arr_42 [i_9] [i_9] = ((/* implicit */_Bool) 8401538984215245770LL);
        arr_43 [i_9] = ((/* implicit */unsigned int) 7ULL);
    }
}
