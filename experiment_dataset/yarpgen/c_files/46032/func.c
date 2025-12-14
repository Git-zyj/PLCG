/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46032
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
    var_14 = ((/* implicit */unsigned long long int) ((var_9) == (max((((/* implicit */unsigned long long int) var_8)), (max((var_0), (var_11)))))));
    var_15 = ((/* implicit */unsigned char) (~(var_3)));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (3790187703U) : (3790187703U)))) ? (max((((/* implicit */unsigned long long int) var_2)), (var_9))) : (((/* implicit */unsigned long long int) (-(var_10))))))) || (((/* implicit */_Bool) (-(min((var_11), (4611681620380876800ULL))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((unsigned long long int) arr_0 [i_0])))));
        var_18 = ((((/* implicit */int) (unsigned short)19241)) - (((/* implicit */int) arr_0 [i_0])));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (short i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_15 [i_1] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) - (4134341181174506781ULL)));
                        var_19 = ((/* implicit */unsigned short) arr_5 [i_1] [i_2]);
                        /* LoopSeq 4 */
                        for (int i_5 = 4; i_5 < 10; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */signed char) var_1);
                            arr_18 [i_1] [i_2] [i_3] [i_1] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((var_13), (((/* implicit */int) (unsigned short)16320))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611681620380876804ULL)) ? (((/* implicit */int) (unsigned short)36257)) : (-846709725)))) ? (((((/* implicit */_Bool) arr_17 [i_1] [i_2] [i_3] [i_4] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_10))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_1])))))))))));
                            var_21 = ((/* implicit */int) 14151182767026561326ULL);
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (+(max((((/* implicit */long long int) arr_5 [i_2 - 3] [i_5 - 1])), (4674919831268037428LL))))))));
                            arr_19 [i_5] [i_4] [2LL] [i_1] [i_2] [i_1] [2LL] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)17)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_2 [9] [i_3]), (((/* implicit */unsigned char) (_Bool)1)))))) : (var_10)))), (var_12));
                        }
                        /* vectorizable */
                        for (short i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) var_2);
                            var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) var_13)) ? (arr_16 [i_1] [i_4] [3U] [(_Bool)1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_6]))))) & (((/* implicit */unsigned long long int) arr_3 [i_4]))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((((/* implicit */long long int) max((var_7), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)50)))))))), (((arr_8 [i_2 + 1] [(short)10] [i_2 + 2]) >> (((var_13) + (6968183))))))))));
                            arr_27 [i_1] [i_2] [i_2] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (0ULL)));
                        }
                        /* vectorizable */
                        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_1 [i_1] [i_3]))));
                            arr_31 [i_8] [(unsigned char)10] [i_3] [i_1] [i_2] = 0;
                            var_27 = ((/* implicit */int) arr_8 [i_3] [i_4] [i_8]);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_9 = 1; i_9 < 7; i_9 += 1) 
        {
            arr_36 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) ((unsigned char) 18446744073709551615ULL)))) & (((((/* implicit */_Bool) arr_8 [i_9 + 3] [i_9] [i_9 + 4])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (signed char i_10 = 1; i_10 < 7; i_10 += 4) 
            {
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    {
                        arr_44 [6ULL] [i_1] [i_1] [i_1] [i_10] [i_11] = ((/* implicit */unsigned long long int) (+((+(max((((/* implicit */unsigned int) (short)6654)), (1449963171U)))))));
                        arr_45 [i_11] [i_1] [i_10] [i_1] [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (+(arr_38 [i_1] [(unsigned char)5] [i_10] [i_11])))), (18446744073709551610ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_33 [i_10] [i_10]) | (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
                    }
                } 
            } 
            var_28 -= (~(10763298300971662263ULL));
            arr_46 [i_1] [(short)5] [i_1] = ((/* implicit */unsigned long long int) var_7);
        }
        /* vectorizable */
        for (short i_12 = 4; i_12 < 10; i_12 += 4) 
        {
            arr_49 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_4 [i_1] [i_12])) & (((/* implicit */int) (short)-28)))));
            var_29 -= ((/* implicit */unsigned char) (+(arr_29 [i_1] [i_12 - 3] [i_12] [i_12 - 2] [i_12] [i_12 + 1])));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_1])) ? (((/* implicit */int) arr_35 [i_1] [i_12 - 2])) : ((~(((/* implicit */int) arr_5 [i_1] [i_12]))))));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_12] [5LL] [i_12])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_8)) << (((((var_13) + (6968212))) - (10)))))))))));
            var_32 *= ((/* implicit */unsigned int) (unsigned char)227);
        }
    }
}
