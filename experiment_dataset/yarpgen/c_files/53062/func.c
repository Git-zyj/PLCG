/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53062
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) 1152921504069976064ULL))));
    var_13 -= (signed char)16;
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) /* same iter space */
    {
        var_14 -= ((/* implicit */int) (signed char)-16);
        var_15 = ((/* implicit */signed char) (~(606123137U)));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            var_16 ^= ((/* implicit */unsigned long long int) (+(8388544U)));
            var_17 -= ((/* implicit */unsigned short) (signed char)-16);
            arr_5 [i_0] [7LL] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) 16711218049346895655ULL)))))));
            arr_6 [i_0] [i_1 + 1] = 0ULL;
        }
        for (int i_2 = 2; i_2 < 23; i_2 += 2) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (signed char)29))));
            var_19 = ((/* implicit */unsigned char) (_Bool)1);
        }
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            var_20 = (~((+((-(-241121040))))));
            arr_15 [i_4] [(signed char)10] [i_4] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -826302948))));
        }
        for (unsigned long long int i_5 = 3; i_5 < 21; i_5 += 2) 
        {
            arr_18 [i_3] = ((/* implicit */int) (unsigned char)210);
            var_21 = ((/* implicit */unsigned int) -728550912);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 24; i_6 += 1) 
        {
            arr_21 [i_6] [10] [i_6] |= 15359770696186432545ULL;
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (!(((/* implicit */_Bool) (-(4286578752U)))))))));
            var_23 = 2130706432U;
        }
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)142))));
            var_25 |= ((/* implicit */unsigned long long int) (unsigned char)210);
            arr_25 [i_3] [i_7] [i_3] = (!(((/* implicit */_Bool) 14055924270320380575ULL)));
        }
        /* vectorizable */
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            var_26 = ((/* implicit */long long int) 1977585940);
            var_27 ^= ((/* implicit */short) 14055924270320380575ULL);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            var_28 = ((/* implicit */_Bool) 3923523089570289793ULL);
            arr_32 [i_3] [i_9] = (+(((/* implicit */int) (short)510)));
            arr_33 [7ULL] [i_3] = ((/* implicit */signed char) (_Bool)1);
        }
        /* LoopNest 2 */
        for (unsigned short i_10 = 1; i_10 < 22; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 3; i_11 < 22; i_11 += 4) 
            {
                {
                    arr_39 [i_3] [i_10] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_40 [i_3] [10ULL] |= ((/* implicit */unsigned char) (-((-((~(((/* implicit */int) (unsigned short)4242))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 1; i_12 < 23; i_12 += 2) 
        {
            arr_43 [i_3] [i_3] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) 1977585940))));
            /* LoopSeq 2 */
            for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                var_29 = (+(((/* implicit */int) (signed char)66)));
                arr_46 [i_3] [i_3] = ((/* implicit */unsigned long long int) (unsigned short)4242);
            }
            for (signed char i_14 = 0; i_14 < 24; i_14 += 2) 
            {
                var_30 ^= (~((+(((/* implicit */int) (unsigned char)0)))));
                /* LoopSeq 1 */
                for (int i_15 = 1; i_15 < 22; i_15 += 2) 
                {
                    var_31 |= ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_54 [i_3] [i_15] [i_3] [i_15 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-66)))))));
                    arr_55 [i_3] [(unsigned char)6] [i_14] [i_15 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) 12795882036814592187ULL))));
                }
            }
        }
        var_32 ^= (signed char)-62;
    }
    for (short i_16 = 0; i_16 < 24; i_16 += 3) /* same iter space */
    {
        var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned short)25333)))))))));
        arr_58 [i_16] [i_16] = ((/* implicit */unsigned char) -303131950);
    }
}
