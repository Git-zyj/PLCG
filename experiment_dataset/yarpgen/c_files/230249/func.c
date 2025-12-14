/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230249
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
    var_16 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) max((((/* implicit */int) ((signed char) (signed char)-95))), ((+(((/* implicit */int) var_4))))))) != (var_9)));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (long long int i_3 = 4; i_3 < 16; i_3 += 1) 
                {
                    {
                        arr_9 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) min((arr_1 [i_0]), ((signed char)101))))))), (arr_5 [5ULL] [i_1 + 1] [i_2] [i_2])));
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((max((arr_5 [(_Bool)1] [i_2] [i_3 - 3] [i_3 - 2]), (((/* implicit */unsigned long long int) (signed char)7)))) - (max((((/* implicit */unsigned long long int) ((int) (_Bool)1))), ((((_Bool)1) ? (13291882609555779329ULL) : (((/* implicit */unsigned long long int) 1802689112U))))))));
                    }
                } 
            } 
        } 
        var_17 *= ((/* implicit */_Bool) max(((-((~(1926171591U))))), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [15U] [i_0] [i_0] [i_0]))))) % (((/* implicit */int) arr_1 [i_0])))))));
        var_18 = ((/* implicit */short) 1610443537U);
        var_19 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((_Bool) arr_8 [(_Bool)1] [i_0] [i_0] [i_0] [i_0]))))) % ((+(((unsigned int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
    {
        arr_13 [(signed char)4] [i_4] = ((/* implicit */int) ((((unsigned long long int) arr_8 [16ULL] [16ULL] [i_4] [i_4] [8])) + (((/* implicit */unsigned long long int) ((int) arr_8 [12LL] [i_4] [i_4] [i_4] [16U])))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 2; i_5 < 13; i_5 += 1) 
        {
            for (signed char i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) min((var_20), ((~(((((/* implicit */int) arr_0 [i_5 - 2] [i_5 - 1])) % (((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((signed char) ((((((/* implicit */int) arr_6 [i_8] [i_4])) >= (((/* implicit */int) arr_14 [(signed char)2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_14 [14U])) <= (((/* implicit */int) (short)15784)))))) : (((unsigned int) (short)4598))))))));
                                arr_25 [i_5] [i_8] [i_6] [i_5] [i_8] [i_4] [i_6] = ((/* implicit */signed char) 329718479);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_26 [10ULL] = ((/* implicit */_Bool) arr_4 [i_4] [i_4] [i_4]);
        arr_27 [i_4] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) min((arr_6 [i_4] [4U]), (((/* implicit */short) arr_23 [i_4] [i_4] [i_4] [i_4] [4U]))))) < (max((((/* implicit */int) arr_0 [i_4] [i_4])), (arr_18 [i_4] [i_4] [i_4] [15U]))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (signed char i_10 = 2; i_10 < 14; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-82)) >= (((/* implicit */int) (short)15781))));
                        arr_36 [i_11] [i_11] = ((/* implicit */_Bool) arr_14 [i_11]);
                    }
                } 
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned long long int) var_7);
}
