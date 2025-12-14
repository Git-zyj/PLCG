/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204192
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                var_14 = (~(((/* implicit */int) ((((10ULL) + (((/* implicit */unsigned long long int) 1665863726)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_3 + 2])) ? (arr_8 [i_2 - 1] [i_2 - 1] [i_3 - 1] [i_3 + 2]) : (arr_8 [i_2 - 1] [i_2 - 1] [i_3 + 2] [i_3 - 1])))) <= (((((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_2 - 1] [i_3 + 1] [i_3 - 1])) - (12ULL))))))));
                            var_16 ^= ((/* implicit */unsigned char) (_Bool)1);
                            var_17 = ((/* implicit */unsigned short) var_1);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                    {
                        {
                            arr_16 [(signed char)12] [i_4] [i_4] [(signed char)12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((17944029765304320ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? ((((((_Bool)0) ? (15ULL) : (((/* implicit */unsigned long long int) arr_4 [i_4] [i_0])))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)2))))))) : (((((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2623102358418751187ULL))) >> (((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)114)) : (arr_8 [i_0] [i_1] [i_4] [i_5]))) - (106)))))));
                            arr_17 [i_4] [i_4] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) var_9);
                            arr_18 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)10)) | (((/* implicit */int) (signed char)34))))))))));
                            var_18 = ((/* implicit */short) ((unsigned short) (signed char)95));
                            var_19 = ((/* implicit */unsigned int) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_6 = 4; i_6 < 23; i_6 += 2) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) (~(-1)));
                arr_24 [i_6] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)10)) << (((/* implicit */int) (signed char)12))))) ? (arr_19 [i_7]) : (((((/* implicit */_Bool) var_1)) ? (arr_19 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_6 - 3] [i_7 + 3])))))));
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                {
                    for (int i_9 = 2; i_9 < 22; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 23; i_10 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((short) (signed char)-6)), (((/* implicit */short) ((((/* implicit */int) var_6)) != (((/* implicit */int) arr_31 [9ULL] [i_10] [i_10] [i_10] [i_10])))))))) ? (((/* implicit */int) min(((signed char)-125), ((signed char)71)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)(-127 - 1))), ((unsigned char)255))))));
                                var_22 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (signed char)49))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
    {
        for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 1) 
        {
            for (unsigned char i_13 = 2; i_13 < 14; i_13 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 0; i_14 < 15; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
                        {
                            {
                                arr_47 [i_11] [i_11] = ((/* implicit */unsigned long long int) var_3);
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) 3805949329U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 15; i_16 += 1) 
                    {
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) arr_28 [4] [i_11] [(unsigned short)20])))));
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) 11180751091340122565ULL)))) ? (((arr_0 [i_11] [i_11]) ? (((/* implicit */unsigned long long int) arr_6 [i_11] [i_12] [i_13] [i_13])) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_12)))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_18 = 3; i_18 < 12; i_18 += 1) 
                    {
                        for (int i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            {
                                var_26 = ((/* implicit */signed char) var_4);
                                var_27 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -1761528160)) + (3062039207408983407ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_20 = 2; i_20 < 10; i_20 += 1) 
    {
        for (short i_21 = 0; i_21 < 11; i_21 += 1) 
        {
            for (signed char i_22 = 2; i_22 < 7; i_22 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_23 = 0; i_23 < 11; i_23 += 2) 
                    {
                        for (unsigned int i_24 = 1; i_24 < 9; i_24 += 3) 
                        {
                            {
                                arr_69 [3LL] [i_21] [i_20] [i_23] [i_23] [5U] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)105))));
                                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-113))))) > (min((0U), (((/* implicit */unsigned int) (signed char)-118)))))))));
                                arr_70 [i_20] [i_23] [i_22] [i_21] [i_20] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-60)) ? (-1521020645) : (var_10))))))));
                                var_29 = ((/* implicit */unsigned long long int) ((((var_12) ? (((/* implicit */int) (signed char)-73)) : (((/* implicit */int) (unsigned short)20388)))) / (((((/* implicit */_Bool) (signed char)83)) ? (2147483647) : (var_10)))));
                                arr_71 [i_20] [i_20] [(signed char)6] [i_23] [i_24] [i_20] [i_21] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-28)) ? (((arr_25 [i_20 + 1] [i_21] [i_22] [i_23]) << (((((/* implicit */int) (signed char)(-127 - 1))) + (158))))) : (0U)))) && (((/* implicit */_Bool) min((min((((/* implicit */signed char) (_Bool)0)), ((signed char)62))), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1277)) && (((/* implicit */_Bool) 10294597251251591338ULL))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 0; i_25 < 11; i_25 += 1) 
                    {
                        for (unsigned long long int i_26 = 0; i_26 < 11; i_26 += 3) 
                        {
                            {
                                var_30 = ((((((/* implicit */_Bool) arr_37 [i_20] [i_20 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_20] [i_22 - 1] [i_22] [i_25] [i_20 - 2])))) * ((((((_Bool)1) ? (((/* implicit */int) (unsigned short)17)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) ((var_8) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25242)))))))));
                                var_31 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (short)32383))));
                                var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_25 [(_Bool)1] [i_21] [i_20] [i_25]))));
                                arr_76 [i_26] [i_25] [i_20] [i_21] [i_20] = (+(((((/* implicit */_Bool) (short)-32379)) ? (((/* implicit */int) (short)-4096)) : (1804252249))));
                                arr_77 [i_26] [i_25] [i_20] [i_20] [i_21] [i_20] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (unsigned char)196)) <= (var_10))) ? (((/* implicit */int) (_Bool)1)) : ((-(((/* implicit */int) var_13)))))) > (max((-2147483647), (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
