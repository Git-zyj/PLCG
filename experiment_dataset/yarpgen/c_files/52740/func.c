/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52740
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) ((unsigned short) 4427779U)))));
        var_15 = 775997373U;
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            var_17 = ((/* implicit */int) var_9);
            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43461)))))))))));
        }
        for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) 3714204727U);
            var_20 = ((/* implicit */unsigned short) max((((arr_7 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_3] [10U] [i_1])) : (((/* implicit */int) var_2)))), (((/* implicit */int) arr_7 [i_3] [i_3] [i_1]))));
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 22; i_5 += 3) 
                {
                    {
                        var_21 = arr_9 [i_5] [i_3];
                        arr_18 [i_3] [i_3] |= 3714204727U;
                        var_22 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((int) var_11))))) ? (((max((((/* implicit */long long int) (unsigned short)22078)), (var_0))) + (((/* implicit */long long int) ((((/* implicit */_Bool) 2771804769654081871LL)) ? (((/* implicit */int) (unsigned short)22074)) : (((/* implicit */int) (_Bool)0))))))) : (((/* implicit */long long int) ((((/* implicit */int) min((var_3), (arr_8 [i_1] [i_3] [(_Bool)1])))) << (((/* implicit */int) arr_8 [i_1] [i_3] [i_4])))))));
                    }
                } 
            } 
        }
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    {
                        arr_26 [(unsigned char)21] [(_Bool)0] [i_1] [(_Bool)0] [(unsigned char)21] [i_1] = ((/* implicit */long long int) (!(((((/* implicit */int) (unsigned short)22078)) > (((/* implicit */int) (unsigned short)43461))))));
                        var_23 = ((/* implicit */unsigned int) var_10);
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) var_12)), (((255U) * (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((786432U) - (786415U))))))))));
                            arr_30 [i_1] [i_1] [i_1] [i_8] [i_9] = ((((/* implicit */_Bool) (+((+(-1LL)))))) ? (((/* implicit */int) (unsigned short)32851)) : (((/* implicit */int) ((((/* implicit */int) ((_Bool) (_Bool)1))) != (((((/* implicit */_Bool) (unsigned short)55492)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_8))))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((+(arr_17 [i_1] [i_6] [i_7] [i_7 - 3] [i_7 - 2] [i_7 + 3]))) % (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            arr_31 [i_1] [i_1] [i_1] [i_7] [i_1] [i_9] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max(((_Bool)1), ((_Bool)1)))), (min((arr_21 [9U] [i_8] [i_8] [i_7 + 1]), (((/* implicit */unsigned int) arr_8 [i_7 + 2] [i_1] [i_7]))))));
                        }
                        for (int i_10 = 3; i_10 < 21; i_10 += 1) 
                        {
                            arr_34 [i_1] [(short)10] [(short)10] [i_1] [i_10] = ((/* implicit */unsigned int) ((int) max((var_0), (((/* implicit */long long int) (+(((/* implicit */int) var_12))))))));
                            arr_35 [i_1] [i_8] [i_6] [i_6] [i_1] = ((/* implicit */unsigned int) arr_28 [i_1] [i_1] [i_6] [i_7] [i_8] [i_10]);
                            arr_36 [i_10 + 1] [i_8] [i_1] [i_6] [i_1] = ((/* implicit */short) ((unsigned char) ((int) ((((/* implicit */_Bool) arr_33 [i_1] [i_8] [i_7] [12ULL] [i_6] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))));
                            arr_37 [i_1] [i_10] [i_10] [i_10] [i_10] = arr_25 [i_7];
                        }
                    }
                } 
            } 
            var_26 = var_2;
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
            {
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    {
                        arr_43 [i_1] [i_1] [i_1] [4LL] = ((/* implicit */unsigned short) (+(786432U)));
                        arr_44 [i_1] [i_11] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)23)) : (((/* implicit */int) var_12))));
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_28 = ((/* implicit */short) (~(((549755813887LL) ^ (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
        }
        arr_45 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned short)30089);
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) % (arr_29 [i_1] [i_1] [i_1] [i_1] [(short)19] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) ? (arr_29 [i_1] [15U] [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_29 [(_Bool)1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) : (arr_29 [i_1] [15LL] [i_1] [i_1] [i_1] [i_1] [i_1])));
        arr_46 [1ULL] [i_1] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)133))) & (var_0))) << (((((((/* implicit */_Bool) (unsigned short)35425)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))) - (28552)))));
        arr_47 [i_1] = ((/* implicit */short) min((((unsigned short) (unsigned char)24)), (((/* implicit */unsigned short) ((191307484U) != (arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [(unsigned char)18]))))));
    }
    var_30 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (-68110623941823435LL)));
}
