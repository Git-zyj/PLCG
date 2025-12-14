/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20531
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
    var_13 = ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (-867461502) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12)))) : (-1553182535));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_14 *= ((/* implicit */unsigned short) var_6);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [1ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
                    arr_10 [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) && ((!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))));
                }
            } 
        } 
    }
    for (signed char i_3 = 4; i_3 < 10; i_3 += 3) 
    {
        var_15 &= ((/* implicit */unsigned short) (+(min((max((((/* implicit */long long int) (unsigned char)39)), (arr_0 [i_3] [i_3]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3 - 1])) ? (var_4) : (((/* implicit */int) arr_2 [(_Bool)1])))))))));
        var_16 *= ((/* implicit */long long int) ((((((arr_0 [6] [6]) | (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_3]))))) | (((/* implicit */long long int) ((/* implicit */int) min((var_0), (((/* implicit */unsigned short) (_Bool)1)))))))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_3 [i_3])))))))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            arr_17 [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) (signed char)-43)))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_9)), (arr_16 [i_4])))), ((-(arr_7 [i_3] [i_4 + 1] [i_4 + 2]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_4])) & (((/* implicit */int) arr_8 [i_4]))))) ? ((+(-3136222092871386638LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_3]))))))))));
            arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [(signed char)0] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))))))));
        }
        for (int i_5 = 3; i_5 < 11; i_5 += 3) 
        {
            arr_22 [1] [i_5] = ((/* implicit */short) ((signed char) min((arr_7 [i_3] [i_3 + 2] [i_5]), (((/* implicit */unsigned long long int) arr_2 [14LL])))));
            var_17 = ((/* implicit */long long int) arr_11 [i_5] [(_Bool)1]);
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    {
                        arr_29 [i_6] [11] [i_5] [i_6] = ((/* implicit */unsigned short) arr_4 [i_5 - 1]);
                        var_18 ^= ((((((/* implicit */int) max((((/* implicit */unsigned short) var_3)), ((unsigned short)31556)))) * (((/* implicit */int) ((((/* implicit */int) arr_1 [i_7])) == (2147483647)))))) ^ (min(((~(arr_12 [(signed char)11] [(signed char)11]))), (((int) arr_20 [i_5 - 1])))));
                        var_19 *= ((/* implicit */long long int) var_5);
                    }
                } 
            } 
            arr_30 [2] |= ((/* implicit */unsigned short) ((((max((arr_21 [i_3 + 1]), (arr_21 [i_3 - 1]))) + (2147483647))) >> (((((/* implicit */int) var_7)) - (39)))));
        }
    }
    for (unsigned long long int i_8 = 3; i_8 < 20; i_8 += 4) 
    {
        arr_33 [17] = max((((((/* implicit */_Bool) arr_32 [i_8 - 3])) ? (min((arr_0 [i_8] [i_8]), (arr_32 [i_8]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_8])) + (((/* implicit */int) arr_2 [2ULL]))))))), ((+((-(arr_0 [i_8] [i_8 - 3]))))));
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_1 [i_8])) ? (arr_3 [i_8]) : (((/* implicit */int) arr_5 [i_8] [i_8 - 3] [i_8])))) != (((/* implicit */int) max((arr_6 [i_8]), (arr_5 [(unsigned char)12] [i_8] [i_8])))))) ? (((/* implicit */int) ((signed char) arr_7 [i_8] [i_8 - 1] [i_8]))) : ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))))))))));
        /* LoopSeq 4 */
        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_37 [i_8] = ((/* implicit */unsigned short) var_10);
            arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_7 [i_8 + 1] [i_8 - 2] [i_8 - 2]), (arr_7 [i_8 - 3] [i_8] [i_8 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))) : (min((arr_7 [i_8 - 3] [i_8 - 2] [i_8 - 2]), (arr_7 [i_8 + 1] [i_8 - 3] [i_8 + 1])))));
            arr_39 [i_8] = ((/* implicit */long long int) ((unsigned char) max((((((/* implicit */int) (short)28672)) - (((/* implicit */int) var_12)))), (var_8))));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 21; i_10 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 4; i_11 < 20; i_11 += 4) 
            {
                for (int i_12 = 3; i_12 < 20; i_12 += 3) 
                {
                    {
                        var_21 = ((/* implicit */signed char) arr_41 [i_10] [i_11]);
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) arr_44 [i_8]))));
                        /* LoopSeq 2 */
                        for (signed char i_13 = 0; i_13 < 21; i_13 += 1) 
                        {
                            arr_50 [(signed char)20] [i_12] [i_12] [(short)5] [i_12] = ((int) -299434542);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((arr_43 [i_11 - 1] [i_12] [i_12] [i_12 - 3]) / (var_11))))));
                            arr_51 [i_8 - 1] [i_12] [i_11] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */int) arr_42 [i_11] [i_12])) | (var_4))));
                        }
                        for (long long int i_14 = 4; i_14 < 20; i_14 += 2) 
                        {
                            var_24 = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_8] [14] [10LL]))))) ? ((+(-1991939987))) : (((((/* implicit */_Bool) arr_5 [i_12 - 2] [(_Bool)1] [i_8])) ? (((/* implicit */int) arr_46 [i_11] [i_12] [i_14 + 1])) : (((/* implicit */int) var_9)))));
                            arr_55 [i_12] [i_12] [i_11] [i_11] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)57))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_46 [i_11] [i_12] [i_14])))))));
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_40 [11LL] [i_10]))))) | (((((/* implicit */_Bool) arr_54 [i_8] [i_10] [i_12] [(unsigned char)10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_12] [i_10] [i_11] [i_10] [i_12]))) : (arr_7 [i_14] [4LL] [i_8])))));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((int) ((long long int) arr_3 [i_8]))))));
                            arr_56 [i_8] [i_10] [i_11] [i_12] [(signed char)13] [i_12] = ((/* implicit */short) (-(((((/* implicit */_Bool) 11182644073825720241ULL)) ? (var_11) : (((/* implicit */long long int) var_4))))));
                        }
                        arr_57 [i_12] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_52 [i_12] [i_10] [i_10] [i_11] [i_8])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    {
                        arr_63 [i_8] [(short)14] [4] [2LL] [i_16] = ((/* implicit */short) var_10);
                        var_27 = ((/* implicit */unsigned long long int) arr_1 [i_10]);
                        var_28 = ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)53026)) || (((/* implicit */_Bool) var_11))))) >> ((((~(arr_48 [i_8 - 3]))) + (673894389892310219LL))));
                        var_29 = ((/* implicit */_Bool) (-(((((/* implicit */long long int) 4294967268U)) ^ (arr_0 [i_15] [i_8])))));
                    }
                } 
            } 
        }
        for (long long int i_17 = 0; i_17 < 21; i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                for (long long int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    {
                        var_30 *= ((/* implicit */int) ((((/* implicit */int) ((short) ((((/* implicit */long long int) -1001117317)) | (arr_43 [i_8] [i_8] [(_Bool)1] [i_19]))))) > (((/* implicit */int) var_1))));
                        var_31 = min(((signed char)-57), (arr_60 [i_19] [i_8] [i_8]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_20 = 1; i_20 < 17; i_20 += 3) 
            {
                for (short i_21 = 0; i_21 < 21; i_21 += 1) 
                {
                    {
                        arr_79 [18LL] [i_17] [i_8] [(unsigned char)10] [(short)0] |= ((/* implicit */unsigned char) (~(867461501)));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) -1165399321)) <= (11182644073825720223ULL)));
                    }
                } 
            } 
            var_33 = ((/* implicit */long long int) ((((((int) ((-1514549645) - (-867461507)))) + (2147483647))) >> (((/* implicit */int) ((((((/* implicit */_Bool) arr_44 [i_8])) ? (((/* implicit */int) arr_42 [i_8] [i_17])) : (((/* implicit */int) arr_5 [i_8 - 1] [i_8] [i_17])))) <= (max((((/* implicit */int) (unsigned short)25190)), (arr_3 [i_17]))))))));
            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_70 [i_17] [(_Bool)1] [i_8] [(_Bool)1] [(signed char)4]), (((((/* implicit */_Bool) var_3)) ? (arr_7 [(unsigned short)0] [i_17] [i_8]) : (((/* implicit */unsigned long long int) arr_66 [i_17] [i_17]))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_8 - 3] [0LL] [i_8]))) : (arr_4 [i_17]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 11182644073825720232ULL)) ? (((/* implicit */int) arr_31 [(signed char)0] [(signed char)0])) : (((/* implicit */int) arr_31 [i_8] [i_8])))))));
        }
        /* vectorizable */
        for (long long int i_22 = 0; i_22 < 21; i_22 += 1) /* same iter space */
        {
            var_35 += ((/* implicit */unsigned long long int) var_12);
            arr_84 [i_8 + 1] [i_8] [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) var_1)))));
        }
    }
}
