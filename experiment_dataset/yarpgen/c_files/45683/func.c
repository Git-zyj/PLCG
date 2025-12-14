/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45683
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
    var_11 = ((/* implicit */unsigned short) ((_Bool) ((short) (~(((/* implicit */int) (_Bool)0))))));
    var_12 |= ((/* implicit */long long int) var_10);
    /* LoopSeq 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */_Bool) var_1);
            arr_6 [(unsigned short)0] [(unsigned short)0] [i_1] = ((/* implicit */unsigned int) ((unsigned char) 2769707545U));
            arr_7 [11U] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((var_5) / (((/* implicit */long long int) ((int) var_0)))))));
            arr_8 [i_0 + 1] = ((/* implicit */short) max((((((var_7) + (2147483647))) >> (((((/* implicit */int) var_8)) - (147))))), (((/* implicit */int) var_4))));
        }
        arr_9 [i_0] = ((/* implicit */short) (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (max((((/* implicit */long long int) var_6)), (var_5)))))));
        arr_10 [i_0] [i_0] = ((/* implicit */short) (+((-(((/* implicit */int) var_6))))));
        arr_11 [i_0 - 2] = ((/* implicit */_Bool) var_7);
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_14 [6] [6] = ((/* implicit */_Bool) ((short) max((max((var_7), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        arr_15 [(short)10] = ((/* implicit */unsigned int) (short)-14062);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_4 = 3; i_4 < 9; i_4 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
                {
                    for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        {
                            arr_27 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) | (((/* implicit */int) var_8))))))) ? ((+(((/* implicit */int) ((unsigned char) var_3))))) : (((/* implicit */int) (short)-28166))));
                            arr_28 [i_2] [4LL] [i_4] [i_3] [i_3] [i_2] = ((/* implicit */_Bool) (unsigned short)24483);
                            arr_29 [i_6] [i_2] [5LL] [i_2] [i_2] = ((/* implicit */unsigned int) (+(var_5)));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    arr_32 [i_2] [i_2] [i_4 - 1] [(unsigned short)6] = ((/* implicit */unsigned short) min((((short) (+(var_2)))), (((/* implicit */short) ((unsigned char) min(((unsigned short)41052), (var_6)))))));
                    arr_33 [(short)6] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((var_3) && (((/* implicit */_Bool) var_8))))), (((long long int) var_3))));
                }
                for (unsigned int i_8 = 3; i_8 < 9; i_8 += 1) /* same iter space */
                {
                    arr_36 [i_2] [i_3] [i_3] [i_4] [i_4] [i_2] = ((/* implicit */unsigned char) (+(min(((-(((/* implicit */int) arr_31 [(unsigned char)0])))), (((/* implicit */int) var_4))))));
                    arr_37 [(unsigned char)8] [i_4] [i_2] [i_3] = ((/* implicit */_Bool) ((int) min(((unsigned short)41066), (((/* implicit */unsigned short) (short)32761)))));
                }
                for (unsigned int i_9 = 3; i_9 < 9; i_9 += 1) /* same iter space */
                {
                    arr_42 [i_4 - 1] [i_2] [i_4] [i_4] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) var_9))))));
                    arr_43 [i_2] [i_2] [(_Bool)1] |= ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [i_4 + 2])))))));
                    arr_44 [i_2] [(unsigned char)10] [i_4 - 1] [i_9] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) ((_Bool) var_2))) : ((-(((/* implicit */int) (unsigned short)24467)))))), ((-(((int) var_7))))));
                }
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    arr_49 [2] [i_10] [(_Bool)1] [i_3] [i_2] = var_7;
                    arr_50 [i_2] [i_2] [i_4] = (-(min((((/* implicit */long long int) (unsigned short)24467)), (max((((/* implicit */long long int) var_1)), (4611686018427387903LL))))));
                    arr_51 [i_2] [i_2] [i_4] [i_10] = ((/* implicit */short) min((((/* implicit */long long int) (+(((((/* implicit */int) var_3)) * (((/* implicit */int) arr_31 [i_4]))))))), ((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20405))) : (-3699674654088411291LL)))))));
                    arr_52 [i_2] [(unsigned short)2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)60)))))))), (var_1)));
                    arr_53 [i_2] [i_3] [i_2] [i_2] = var_5;
                }
            }
            for (long long int i_11 = 3; i_11 < 9; i_11 += 3) /* same iter space */
            {
                arr_58 [i_2] [6U] [i_3] [10LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_2] [(short)4])) : (((/* implicit */int) (unsigned short)45132))))) ? (((/* implicit */int) (short)-13682)) : (((/* implicit */int) (short)32745))));
                arr_59 [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (unsigned short)51338)), (max((((long long int) var_4)), (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))))));
            }
            arr_60 [i_2] [i_2] = (((~((~(((/* implicit */int) var_0)))))) & (((/* implicit */int) (unsigned char)0)));
            arr_61 [i_2] = ((/* implicit */long long int) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) arr_30 [i_3] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (unsigned char i_14 = 3; i_14 < 10; i_14 += 4) 
                {
                    {
                        arr_71 [0U] &= (_Bool)1;
                        arr_72 [(unsigned char)9] [i_2] [(unsigned char)9] [i_14] = ((/* implicit */_Bool) var_8);
                        arr_73 [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_74 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    }
                } 
            } 
            arr_75 [i_2] [i_12] = ((/* implicit */_Bool) arr_31 [i_12]);
        }
    }
    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
    {
        arr_78 [i_15] = ((/* implicit */short) max((((/* implicit */int) var_4)), (((((_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) 2031616))) : (((((/* implicit */int) var_10)) + (((/* implicit */int) var_6))))))));
        arr_79 [i_15] = ((/* implicit */int) ((((((long long int) var_8)) - ((~(6061116608729414748LL))))) > (((/* implicit */long long int) max((((/* implicit */unsigned int) ((_Bool) var_4))), ((+(arr_76 [i_15]))))))));
        arr_80 [i_15] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? ((+(arr_77 [(unsigned char)19]))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        arr_81 [i_15] = ((/* implicit */long long int) (_Bool)1);
    }
    var_13 = ((/* implicit */short) (~(((/* implicit */int) var_0))));
}
