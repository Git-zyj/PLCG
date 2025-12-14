/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48964
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
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(signed char)14])) ? (var_2) : (arr_0 [(unsigned short)10]))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)47342))))) ? (((((/* implicit */int) var_6)) / (arr_0 [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32752))))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 16)) ? (((/* implicit */int) (unsigned short)47342)) : (((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_4 [i_1] [i_1])) != (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
        {
            arr_9 [16LL] = ((/* implicit */unsigned int) (!((_Bool)1)));
            var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_2]))) > (var_5))) ? (((((/* implicit */_Bool) arr_4 [(unsigned short)5] [i_2])) ? (-2030357652822191673LL) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_1] [3ULL])) : (((/* implicit */int) arr_8 [(unsigned short)4] [i_2] [i_2])))))));
            /* LoopNest 3 */
            for (unsigned short i_3 = 3; i_3 < 20; i_3 += 2) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : ((-(((/* implicit */int) (_Bool)1))))));
                            arr_19 [i_3] [i_1] [i_3] [i_1] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) % (var_18))) - (((/* implicit */long long int) ((/* implicit */int) ((arr_16 [i_2] [i_2] [i_2 - 3] [i_2]) < (((/* implicit */unsigned long long int) var_15))))))));
                        }
                    } 
                } 
            } 
            var_22 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_10 [i_2] [i_1] [18LL])))) ? (((((/* implicit */int) arr_10 [i_1] [i_1] [i_1])) / (((/* implicit */int) var_7)))) : ((-(((/* implicit */int) var_3))))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) 
        {
            arr_22 [i_1] [(short)8] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1] [14] [i_6])) ? (((/* implicit */int) arr_12 [i_6] [20LL] [(unsigned char)12] [i_1])) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)37415)) : (((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))));
            arr_23 [i_1] [(unsigned short)11] [i_1] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)18191)))) == ((~(((/* implicit */int) (_Bool)0))))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_6] [i_6])))))) < (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)92))) : (var_0)))));
        }
        for (int i_7 = 2; i_7 < 21; i_7 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 1; i_8 < 20; i_8 += 4) 
            {
                for (unsigned int i_9 = 0; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9166819805847419089LL)) ? (((/* implicit */int) arr_29 [i_1] [i_7] [i_9] [i_9] [(unsigned char)16])) : (var_17)))) ? (((var_16) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((arr_8 [i_8 + 2] [i_7 - 1] [i_1]) ? (((/* implicit */int) (short)6004)) : (((/* implicit */int) var_8)))))));
                        arr_31 [i_1] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)85)) ? (((/* implicit */int) var_7)) : (-1205997184)))) != (((((/* implicit */_Bool) -1309437120234598023LL)) ? (arr_26 [i_1] [i_7 - 1] [i_1] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    }
                } 
            } 
            arr_32 [i_1] [i_1] [9] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)160))))) <= (((((/* implicit */_Bool) arr_17 [i_1] [(short)10] [i_7 - 2] [i_7] [(short)16])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)36))))));
            var_25 = ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967295U)) ^ (arr_21 [i_1] [i_7 - 2] [i_7 + 1])))) ? (((((/* implicit */_Bool) arr_5 [i_7] [i_7 - 1])) ? (((/* implicit */int) (signed char)53)) : (((/* implicit */int) var_12)))) : ((-(((/* implicit */int) var_4)))));
        }
    }
    var_26 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) 10675281371924950205ULL))))) <= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4)))))) ? ((-(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)15267)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) == (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))))))));
    var_27 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1048575U)) && (((/* implicit */_Bool) 14953272943680917665ULL)))) ? ((+(((((/* implicit */_Bool) 24U)) ? (7050478230162960315LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
}
