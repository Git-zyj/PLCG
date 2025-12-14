/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40020
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) (short)-28132)));
        arr_4 [i_0] = ((/* implicit */short) (+(-978593957958580774LL)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_15 [i_1] [i_1] [i_2 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((5896434765651949668LL) + (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_2] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_3])))));
                        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((var_2) + (2147483647))) >> (((var_15) - (2621386774077191230ULL))))))));
                    }
                } 
            } 
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 15605172240042200966ULL)) ? (var_7) : (((/* implicit */int) (short)28132))));
        }
    }
    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned char)2)) : (1463396868)));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            var_20 += ((/* implicit */int) var_3);
                            var_21 *= ((/* implicit */signed char) ((unsigned short) 4611267803425757180LL));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((short) min((((/* implicit */int) (unsigned char)89)), ((+(var_6)))))))));
                            arr_32 [i_4 + 2] [i_7] [i_6] [i_4 + 2] [i_9] = ((/* implicit */unsigned int) (~(((max((10109636666734043739ULL), (((/* implicit */unsigned long long int) -896354923)))) / (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_1)), (arr_27 [i_9] [i_7] [i_6] [i_4] [i_4]))))))));
                            var_23 = ((/* implicit */int) min((var_23), ((-(((arr_18 [i_4 + 1]) | (arr_18 [i_4 + 2])))))));
                            arr_33 [i_7] [i_7] [i_6] [(signed char)10] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_4 + 2] [i_4 + 2]))))) ? ((-(arr_17 [i_4 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_4 - 1] [9ULL] [i_4 - 1])))))));
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((unsigned char) max((13056830089659042769ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1696412549)) ? (1141052421760539149LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))))))))))));
                        }
                        arr_34 [(unsigned char)4] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) max((arr_30 [i_4] [i_5]), (((/* implicit */unsigned short) (short)-28155))))))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */_Bool) (-(((/* implicit */int) max((var_10), (arr_20 [i_4] [i_4 - 1]))))));
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)166)) || (((/* implicit */_Bool) (unsigned short)9))))), ((+(((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [i_4] [i_4 + 2])))))))));
        arr_35 [4] [i_4] = ((/* implicit */long long int) ((unsigned short) max((arr_29 [i_4 + 2] [10U] [10U] [i_4] [i_4 + 2]), (arr_29 [i_4] [i_4] [(short)4] [i_4] [i_4]))));
    }
    for (unsigned short i_10 = 1; i_10 < 19; i_10 += 2) /* same iter space */
    {
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (((+((+(2841571833667350650ULL))))) == (((/* implicit */unsigned long long int) var_12)))))));
        arr_38 [i_10] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)154))))) ? (((/* implicit */unsigned long long int) ((-94291503) ^ (((/* implicit */int) var_0))))) : (arr_23 [i_10] [i_10] [16ULL] [i_10 + 2]))));
    }
    /* LoopSeq 2 */
    for (int i_11 = 0; i_11 < 21; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_12 = 3; i_12 < 17; i_12 += 3) 
        {
            for (unsigned short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (long long int i_14 = 2; i_14 < 20; i_14 += 3) 
                {
                    {
                        var_28 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_39 [i_11]))));
                        var_29 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */int) (unsigned short)65527)) ^ (170429052))) | (((/* implicit */int) ((signed char) var_13))))));
                        var_30 &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_27 [i_14] [i_12 - 1] [i_12 - 3] [i_14 - 2] [i_13])) ? (((/* implicit */int) ((((/* implicit */_Bool) -993454704)) || (((/* implicit */_Bool) (signed char)-56))))) : (((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) var_9)) : (var_12)))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) min((((/* implicit */short) arr_47 [i_11] [20LL] [i_11] [i_11] [20LL])), (var_10)))))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) 170429052)) == (var_4)))))))))));
    }
    for (unsigned long long int i_15 = 1; i_15 < 11; i_15 += 3) 
    {
        var_32 = ((/* implicit */long long int) (-(arr_25 [3ULL] [3ULL] [i_15] [i_15])));
        var_33 = ((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40858))) / (15729901600707557126ULL))));
    }
}
