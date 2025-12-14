/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209326
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
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) var_6)) : (var_7))) + (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)215))) : (var_7)))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max((var_3), (((signed char) var_6)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 9; i_3 += 1) 
                    {
                        {
                            arr_14 [i_0 + 3] [i_0] [8ULL] [i_0] = ((/* implicit */unsigned short) (unsigned char)4);
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
                            {
                                arr_18 [i_0] [i_1 - 1] [i_0] [i_2] [i_2] [9ULL] [(signed char)5] = ((/* implicit */short) (unsigned char)201);
                                arr_19 [i_0 + 3] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)0))));
                            }
                            for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                            {
                                arr_24 [i_5] [5ULL] [i_5] [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_22 [i_5] [i_2])))))) ? (((/* implicit */int) ((signed char) (unsigned short)65522))) : ((+((~(((/* implicit */int) (unsigned char)58))))))));
                                var_12 = ((/* implicit */unsigned long long int) var_4);
                                var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)-49)), ((unsigned char)7)))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_3))))))) ? (((((/* implicit */_Bool) (unsigned char)197)) ? (13399866029190269060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 + 2]))))) : (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [(short)5])));
                            }
                        }
                    } 
                } 
                var_14 -= (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) <= (((/* implicit */int) (unsigned char)22))))));
                /* LoopSeq 2 */
                for (unsigned char i_6 = 2; i_6 < 7; i_6 += 4) 
                {
                    arr_27 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)117))) : (arr_15 [8ULL] [i_1] [(short)1])));
                    arr_28 [i_0 + 1] [1] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) 17476474331820419130ULL);
                    arr_29 [i_0 + 2] [i_1] [i_6 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (unsigned short)8043)))))) && (((/* implicit */_Bool) max((arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_0]), (((unsigned long long int) arr_9 [i_0 + 3] [i_0 + 3] [i_0])))))));
                }
                for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) (((+(var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1])), (max((arr_32 [i_0] [i_0 + 3] [6U] [i_0]), (((/* implicit */unsigned long long int) (unsigned short)59676)))))) : (var_2)));
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)156))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)3] [i_1] [i_1]))) : (arr_25 [i_1 + 1] [i_1 + 1] [i_7] [i_0])))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 4) 
                        {
                            {
                                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_9] [i_0] [i_0])) ? (arr_25 [i_0 - 1] [i_1] [i_1] [i_8]) : (arr_25 [i_0 - 1] [i_0 - 1] [i_7] [i_8])))) ? ((-(arr_25 [i_0 - 1] [i_0 - 1] [i_7] [i_0 - 1]))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_0 - 1] [i_1] [i_0 - 1] [i_8] [i_9] [i_8] [i_9]))))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)181)) ? (((((/* implicit */int) (unsigned short)8043)) << (((2659137329U) - (2659137322U))))) : (((/* implicit */int) arr_26 [i_1 + 1] [i_0 + 2] [i_9 - 1]))))) | (max((((((/* implicit */long long int) 1725387073)) ^ (arr_2 [i_0]))), (((/* implicit */long long int) max((arr_26 [i_0] [i_1] [i_7]), (arr_40 [i_0] [i_0] [i_7] [i_7] [i_7] [i_8] [i_9])))))))))));
                                var_19 ^= ((/* implicit */short) ((((/* implicit */int) ((short) arr_26 [(short)2] [i_8] [i_9 - 1]))) != ((+(((/* implicit */int) max(((unsigned char)58), (((/* implicit */unsigned char) arr_4 [i_0 + 2])))))))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)64)) ? ((-(3660797659943763366ULL))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) arr_1 [2LL])) : (-1601972972)))))))))));
            }
        } 
    } 
}
