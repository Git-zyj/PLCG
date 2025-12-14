/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227009
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
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)0))));
    var_16 = ((/* implicit */int) var_1);
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned char) min((var_9), ((_Bool)1)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = var_11;
        var_20 &= ((/* implicit */short) (~(var_4)));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-336))))) ? (min((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)246)))), (((/* implicit */int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_4 [i_1] [(short)4]) : (arr_4 [i_1] [i_1])))));
        var_22 = ((/* implicit */_Bool) max((var_22), ((_Bool)1)));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) var_6);
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_18 [i_2] = (+(max((((/* implicit */int) (unsigned char)237)), ((((_Bool)1) ? (((/* implicit */int) (unsigned char)254)) : (33550336))))));
                    var_24 -= ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_7 [(unsigned char)13] [i_3])))) != (((arr_7 [i_4] [i_4]) ? (((/* implicit */int) arr_7 [i_4] [i_5])) : (((/* implicit */int) var_6))))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */short) ((unsigned long long int) max((arr_19 [i_6 - 1] [i_2] [i_6 - 1] [i_2] [i_6 - 1]), (arr_19 [i_6 - 1] [i_2] [i_6 - 1] [i_2] [i_4]))));
                        arr_21 [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2]);
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)18)) << (((((/* implicit */int) (unsigned short)64195)) - (64191)))));
                    }
                    var_26 = ((/* implicit */_Bool) (unsigned short)4);
                    arr_23 [i_3] |= arr_19 [(short)10] [i_3] [(short)10] [i_4] [i_5];
                }
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_7]))))) * ((+(((/* implicit */int) (unsigned char)18)))))))));
                    var_28 = ((/* implicit */_Bool) arr_10 [i_3] [i_2]);
                }
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    arr_28 [i_2] [8] [i_4] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)9))));
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)135)), ((short)0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_3] [i_3])) ? (((((/* implicit */int) var_10)) >> (((var_12) - (2324844935980848557ULL))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_11)))))))));
                    arr_29 [i_2] [(_Bool)1] [i_3] [i_4] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */int) (!((_Bool)1)))), (-1211350271)));
                }
                var_30 = ((/* implicit */_Bool) (unsigned char)0);
            }
            arr_30 [i_2] = (_Bool)1;
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
        {
            var_31 = (_Bool)1;
            /* LoopSeq 3 */
            for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 4) 
            {
                var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_10 [i_2] [i_9]))));
                var_33 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)233)), (-33550354)));
                var_34 += ((/* implicit */unsigned char) ((int) var_4));
                arr_35 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) (short)3354))));
                var_35 = ((/* implicit */unsigned char) min((var_35), (var_8)));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_36 = ((/* implicit */_Bool) ((unsigned char) (unsigned char)43));
                arr_38 [i_2] [i_2] = ((/* implicit */unsigned char) arr_34 [i_2] [i_2] [i_2]);
            }
            for (short i_12 = 0; i_12 < 16; i_12 += 3) 
            {
                arr_42 [i_2] [i_2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((max((var_14), (arr_36 [i_2]))), (min((var_2), (((/* implicit */unsigned char) (_Bool)1))))))) << (((((/* implicit */int) (unsigned char)237)) - (230)))));
                /* LoopSeq 1 */
                for (int i_13 = 2; i_13 < 14; i_13 += 4) 
                {
                    var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((10852571679528267897ULL), (((/* implicit */unsigned long long int) arr_11 [i_13])))))));
                    arr_47 [i_13] [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)5)) + (((/* implicit */int) arr_10 [i_2] [i_2]))))) <= (var_12));
                }
                var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_19 [i_12] [i_2] [i_2] [i_2] [i_2]), (arr_17 [i_2] [i_9] [i_9] [i_12]))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)0), (((/* implicit */unsigned char) arr_25 [i_12] [8ULL])))))) | (((unsigned long long int) (short)-28771))))));
                var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1))));
            }
            var_40 = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) | (var_3))) & (arr_5 [i_2]))) << ((((~(((((/* implicit */int) (short)18233)) << (((/* implicit */int) var_10)))))) + (18262)))));
        }
        var_41 |= ((/* implicit */_Bool) (unsigned char)230);
    }
}
