/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38579
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) (((+(((/* implicit */int) ((short) var_8))))) + (((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned long long int) var_6))))) ? ((-(((/* implicit */int) var_8)))) : (((/* implicit */int) arr_0 [i_0]))))));
        var_13 *= (!(((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_0 [i_0])))));
        var_14 = ((/* implicit */signed char) (-((+(((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_1 [(unsigned char)10]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) ((short) arr_1 [0U])))))));
    }
    for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
    {
        arr_6 [i_1 - 1] = ((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) >> (((var_10) - (1954590454)))))) ? ((+(var_2))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])) <= (var_5))))))) << (((arr_4 [i_1] [i_1]) - (8188299342615633903ULL))));
        var_15 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((arr_4 [i_1] [i_1]) <= (((/* implicit */unsigned long long int) var_2))))) << (((arr_4 [i_1] [i_1]) - (8188299342615633918ULL))))), (((/* implicit */int) ((_Bool) (~(((/* implicit */int) var_4))))))));
        var_16 = ((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1 - 1]);
        arr_7 [i_1] = ((/* implicit */unsigned char) ((arr_4 [i_1] [i_1 - 1]) == (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_3 [i_1 + 1] [(unsigned short)6])))) ? (((/* implicit */int) (!(arr_0 [5ULL])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) > (var_5)))))))));
        var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_0 [i_1]))))))));
    }
    var_18 = ((/* implicit */long long int) var_8);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_9 [i_2] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2]))))) : (((arr_10 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_12 [0U]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned char)17])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_14 [i_2] [i_3] [2U] [16LL])))) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_13 [i_2] [i_2] [(signed char)12] [11]))) : (var_5)))));
                    var_20 *= ((/* implicit */short) ((unsigned short) var_0));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
    {
        arr_18 [3] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */long long int) var_9))))) || (((_Bool) var_5)))))));
        arr_19 [i_5] = ((/* implicit */unsigned char) (((~(var_2))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) var_8)))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((unsigned long long int) arr_16 [i_5])) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_1)))) - (((((/* implicit */long long int) ((/* implicit */int) var_0))) | (arr_15 [i_5])))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_22 [i_6] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_5]) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5]))) : ((-(arr_15 [i_5])))))) ? (((/* implicit */unsigned long long int) ((((arr_20 [i_5]) ? (arr_16 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) ^ (((/* implicit */long long int) min((var_10), (var_10))))))) : (((unsigned long long int) ((((/* implicit */int) arr_20 [(short)4])) >> (((var_10) - (1954590440)))))));
            arr_23 [i_6] [i_6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_15 [i_5])) >= (var_5))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (var_7)))) : (((/* implicit */int) ((short) var_4))))))));
        }
        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 1) 
        {
            arr_26 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) (((-(((/* implicit */int) arr_25 [i_7] [i_5])))) <= (((/* implicit */int) var_4))))) + ((-(((/* implicit */int) ((((/* implicit */long long int) var_9)) > (arr_16 [i_5]))))))));
            arr_27 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((arr_16 [i_7]) / (((/* implicit */long long int) var_10))))))) ? (((((/* implicit */int) arr_17 [i_7 + 2] [i_7])) | (((((/* implicit */_Bool) arr_17 [(short)2] [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_25 [i_5] [i_7])))))) : ((-(((/* implicit */int) var_4))))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_24 [i_5] [i_7] [i_7])) : (((/* implicit */int) arr_17 [i_5] [i_7 - 1])))))) >> (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_25 [i_7 + 1] [i_5])))) >> ((((~(((/* implicit */int) arr_24 [i_5] [4LL] [(_Bool)1])))) + (9980)))))));
        }
        var_23 = ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5])) && (((/* implicit */_Bool) arr_16 [(short)3]))))) >> (((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */int) arr_17 [i_5] [i_5])))) - (1954590453)))))) ? (((/* implicit */int) ((signed char) arr_24 [(_Bool)0] [i_5] [16ULL]))) : (((min((var_10), (((/* implicit */int) var_1)))) - (((/* implicit */int) ((((/* implicit */int) var_1)) == (var_9)))))));
    }
    for (signed char i_8 = 3; i_8 < 10; i_8 += 1) 
    {
        arr_30 [i_8] [i_8] = ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8]))) : (arr_15 [i_8])))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [(_Bool)1] [(_Bool)0])) : (((/* implicit */int) arr_1 [i_8])))) : (((/* implicit */int) var_8))))));
        var_24 *= ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_2) : (var_2)))))) ? (((/* implicit */unsigned long long int) ((long long int) ((arr_0 [i_8]) ? (var_6) : (((/* implicit */long long int) var_10)))))) : (min((((/* implicit */unsigned long long int) ((arr_20 [(_Bool)1]) && (((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 10; i_9 += 1) 
        {
            for (unsigned char i_10 = 2; i_10 < 8; i_10 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_4))))) ? ((+(var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (arr_13 [(signed char)3] [i_9] [(signed char)3] [12ULL]))))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (arr_35 [i_8] [(short)4] [(short)4] [2LL])))), ((+(arr_16 [i_8]))))))));
                    var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_10]))) || (((/* implicit */_Bool) arr_14 [i_10] [11ULL] [4] [i_10])))) ? (((((/* implicit */_Bool) ((arr_20 [i_8]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_25 [(unsigned char)12] [5LL]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_8] [i_8 - 3]))))) : ((-(var_6))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? (((/* implicit */int) arr_28 [i_8] [i_8])) : (((/* implicit */int) arr_12 [12])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_10))))))))));
                }
            } 
        } 
        var_27 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_10 [(unsigned char)3] [11LL]) ? (((/* implicit */int) arr_17 [i_8] [16LL])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_8 - 2]))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_3))))))))) <= (((((((/* implicit */_Bool) arr_35 [i_8] [i_8] [i_8] [(unsigned char)6])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) << (((arr_4 [i_8] [(unsigned char)9]) - (8188299342615633930ULL))))));
    }
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) min((var_28), (((/* implicit */unsigned short) ((((long long int) ((((/* implicit */int) arr_41 [(signed char)18])) > (((/* implicit */int) arr_41 [(short)22]))))) >> (((/* implicit */int) var_7)))))));
        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_41 [i_11])) ? (((((arr_40 [i_11]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((arr_40 [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_11]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
    }
}
