/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49310
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */int) arr_3 [i_1]);
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) 1112491958);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        {
                            var_13 |= (unsigned char)255;
                            var_14 ^= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5 + 2] [i_5 + 2])) ? (arr_7 [i_5 + 3]) : (((/* implicit */int) var_11)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 22; i_7 += 3) 
        {
            {
                arr_23 [i_7] [18U] [i_7] = ((/* implicit */int) var_9);
                var_15 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)189))));
                arr_24 [i_7] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7]))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_7] [i_6])) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) (unsigned char)10))))) ? ((+(((/* implicit */int) var_9)))) : (((/* implicit */int) arr_22 [i_7 + 1] [i_7 - 1] [i_7]))))));
                arr_25 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6])) ? ((+(((/* implicit */int) (unsigned char)253)))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
                /* LoopNest 3 */
                for (long long int i_8 = 1; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_10) ? (4148042013U) : (((/* implicit */unsigned int) 1112491958))))))) ? ((+(4045519750818619893LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_34 [i_7] [i_7])))));
                                arr_35 [i_6] [i_6] [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((4128768ULL) >= (((/* implicit */unsigned long long int) 7453431252567499667LL))))))), (max((((((/* implicit */int) (signed char)60)) ^ (((/* implicit */int) var_1)))), (((/* implicit */int) arr_32 [i_6] [i_6] [i_7] [i_7 + 1] [i_9] [i_10]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 13; i_11 += 4) 
    {
        for (int i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_13 = 1; i_13 < 11; i_13 += 3) 
                {
                    for (unsigned int i_14 = 0; i_14 < 13; i_14 += 3) 
                    {
                        {
                            var_17 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) arr_47 [i_14] [i_14] [i_14] [i_13 - 1] [i_11])))));
                            arr_48 [i_11] [i_11] [i_11] [i_13] = ((/* implicit */_Bool) min((var_4), (((/* implicit */long long int) arr_13 [i_11] [(signed char)5] [(signed char)5] [i_13]))));
                            arr_49 [i_12] [i_13] [i_14] = ((((-1112491963) + (2147483647))) >> (((max(((-(119511476))), (-513400958))) + (119511491))));
                            var_18 &= ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)182))))) % (7453431252567499685LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-68)), (2647517842U)))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_1))))))))) : (920656211U));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((arr_6 [i_11] [i_12] [i_11]) == (arr_6 [i_12] [i_11] [i_11]))))));
                var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) var_11)), (((((/* implicit */int) var_9)) >> (((/* implicit */int) arr_33 [i_11] [i_11] [i_12] [i_12] [i_12] [i_12] [i_12]))))));
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 13; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 2; i_17 < 11; i_17 += 3) 
                        {
                            {
                                arr_59 [i_11] [i_11] [i_11] [i_11] [i_15] [i_11] = ((/* implicit */unsigned int) 7453431252567499654LL);
                                arr_60 [i_11] [i_11] [i_11] [i_12] [i_15] [i_11] [10ULL] |= ((/* implicit */_Bool) ((((unsigned int) var_0)) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_11] [i_17])))))) ? ((~(-1112491958))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_17] [i_16] [i_15] [i_15] [18U] [18U]))))))))));
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((arr_33 [i_11] [i_16] [i_16] [i_16] [i_17] [i_17 + 1] [i_17]) ? (((/* implicit */int) ((((/* implicit */_Bool) -1112491985)) && (((/* implicit */_Bool) var_7))))) : ((-(((/* implicit */int) (_Bool)0))))))) != (max((((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) : (var_0))), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0)))))))));
                                arr_61 [i_15] = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    for (unsigned int i_19 = 0; i_19 < 13; i_19 += 4) 
                    {
                        for (int i_20 = 0; i_20 < 13; i_20 += 3) 
                        {
                            {
                                arr_68 [i_11] [i_11] [i_18] [i_19] [i_20] = ((/* implicit */int) max((((/* implicit */long long int) arr_32 [i_11] [i_11] [i_11] [i_11] [(_Bool)1] [i_11])), ((+(7453431252567499690LL)))));
                                var_22 = ((/* implicit */unsigned long long int) arr_42 [i_18] [i_19] [i_20]);
                                arr_69 [(unsigned char)7] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((unsigned long long int) ((unsigned int) arr_27 [i_20] [i_11] [i_11])));
                                arr_70 [i_11] [i_12] [i_12] [i_19] [i_20] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((var_5) % (((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_11])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) 2220404711U))) : (min((var_6), (((/* implicit */unsigned long long int) var_3))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
